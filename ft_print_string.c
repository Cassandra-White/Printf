
#include "ft_printf.h"
#include <string.h>

static char	*add_preci(t_info *info, char *space_preci, char *str)
{
//	ft_putstr("KOKO");
	if (info->preci == DISABLE 
	|| (info->preci != 0 && info->preci >= ft_strlen(str)))
		return (str);
//	ft_putstr("TOTO");
	if(!(space_preci = malloc(sizeof(char ) * (info->preci + 1))))
		return (ZERO);
	ft_strncpy(space_preci, str, info->preci);
	space_preci[info->preci] = '\0';
	return (space_preci);
}

static char *add_width(t_info *info, char *space_width, char *str)
{
	int i;
//	ft_putstr("KIKI");
	i = ft_strlen(str);
//	printf("I = [%d]", i);
//	ft_putstr("PRESQUE");
	if (info->width <= i)
		return (str);
//	ft_putstr("yoyo");
	if((space_width = add_space(info->width, info->padding)) == 0)
		return (ZERO);
//	ft_putstr("je t'enc");
	if(info->right_space == ENABLE)
		ft_strncpy(space_width, str, i);
	else
		ft_strncpy(&space_width[info->width - i], str, i);
	return (space_width);


}



int		ft_print_string(va_list arg, t_info *info)
{
//	printf("MOMO");
//	ft_putstr("FUCK");
	t_space *space;
	int	flag;
	char *str;
//	str = 0;
//	printf("STR 1 = [%s]", str);
	flag = DISABLE;
//	printf("PIPI");
	str = va_arg(arg, char *);

	if (str == NULL)
	{
//		printf("IF str [%s]", str);
			str = ft_strndup("(null)", 6);
			flag = ENABLE;
	}

//	printf("NORMAL str [%s]", str);
//	ft_putstr("zizi");
	space = start_space();
//	ft_putstr("CACA");
//	printf ("POPO");
	if ((str = add_preci(info, space->preci, str)) == 0 
	||(str = add_width(info, space->width, str))== 0)
	{
//		ft_putstr("juju");
		free_space(space);
		return(ERROR);
	}
//	ft_putstr("NUL");
	info->nbyte += ft_putstr_n(str, ft_strlen(str));
	free_space(space);
	if (flag == ENABLE)
	free(str);

	return (0);
}

