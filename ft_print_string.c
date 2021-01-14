#include "ft_printf.h"
#include <string.h>

static char	*add_preci(t_info *info, char *space_preci, char *str)
{
	if (info->preci == DISABLE
	|| (info->preci != 0 && info->preci >= ft_strlen(str)))
		return (str);
	if (!(space_preci = malloc(sizeof(char ) * (info->preci + 1))))
		return (ZERO);
	ft_strncpy(space_preci, str, info->preci);
	space_preci[info->preci] = '\0';
	return (space_preci);
}

static char	*add_width(t_info *info, char *space_width, char *str)
{
	int	i;

	i = ft_strlen(str);
	if (info->width <= i)
		return (str);
	if ((space_width = add_space(info->width, info->padding)) == 0)
		return (ZERO);
	if (info->right_space == ENABLE)
		ft_strncpy(space_width, str, i);
	else
		ft_strncpy(&space_width[info->width - i], str, i);
	return (space_width);
}

int			ft_print_string(va_list arg, t_info *info)
{
	t_space	*space;
	int		flag;
	char	*str;

	flag = DISABLE;
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = ft_strndup("(null)", 6);
		flag = ENABLE;
	}
	space = start_space();
	if ((str = add_preci(info, space->preci, str)) == 0
	|| (str = add_width(info, space->width, str)) == 0)
	{
		free_space(space);
		return (ERROR);
	}
	info->nbyte += ft_putstr_n(str, ft_strlen(str));
	free_space(space);
	if (flag == ENABLE)
		free(str);
	return (0);
}
