

#include "ft_printf.h"

static char *add_preci(t_info *info, char *space_preci, char *str)
{
	int	i;

	i = ft_strlen(str);
	if(str[0] == '0' && info->preci == 0)
		str = "";
	if(info->preci <= i)
		return (str);
	if(!(space_preci = add_space(info->preci, '0')))
	{
		return (0);
	}
	ft_strcpy(&space_preci[info->preci - i], str);
	return (space_preci);
}

static char *add_width(t_info *info, char *space_width, char *str)
{
	int i;

	i = ft_strlen(str);
	if (info->sign == '\0' && info->width < i)
		return (str);
	if (info->zero == ENABLE && 
		info->preci == DISABLE && info->right_space == DISABLE)
		info->padding = '0';
	if(info->width < i)
		info->width = i;
	if(info->width ==i && info->sign)
		info->width++;
	if(!(space_width = add_space(info->width, info->padding)))
		return (0);
	if (info->right_space == ENABLE && info->sign)
		ft_strncpy(space_width + 1, str, i);
	else if (info->right_space == ENABLE)
		ft_strncpy(space_width, str, i);
	else
		ft_strncpy(&space_width[info->width - i], str, i);
	return (add_sign(info, space_width, i));

	

}
int		ft_print_int(va_list arg, t_info *info)
{
	t_space *space;
	char *str;
	space = start_space();
	if(!(str = ft_itoa((int)va_arg(arg, int))))
		return (ERROR);
	str = start_sign(info, str);

	if(!(str = add_preci(info, space->preci, str))
	|| !(str = add_width(info, space->width, str)))
	{
		free_space(space);
		return(ERROR);
	}

	info->nbyte += ft_putstr_n(str , ft_strlen(str));
	free_space(space);
	return(0);
}
