#include "ft_printf.h"

static char	*add_preci(t_info *info, char *space_preci, char *str)
{
	int	i;

	if (str == 0 && info->preci != 0)
		str = "0";
	i = ft_strlen(str) + ft_strlen("0x");
	if (!(space_preci = malloc(sizeof(char) * (i + 1))))
		return (0);
	ft_strcpy(space_preci, "0x");
	ft_strcpy(space_preci + 2, str);
	return (space_preci);
}

static char	*add_width(t_info *info, char *space_width, char *str)
{
	int i;

	i = ft_strlen(str);
	if (info->width <= i)
		return (str);
	if (!(space_width = add_space(info->width, info->padding)))
		return (0);
	if (info->right_space == ENABLE)
		ft_strncpy(space_width, str, i);
	else
		ft_strncpy(&space_width[info->width - i], str, i);
	return (space_width);
}

int			ft_print_pointer(va_list arg, t_info *info)
{
	t_space	*space;
	char	*str;

	space = start_space();
	if (!(str = ft_lltoa_base(va_arg(arg, long long), HEX_LOW)))
		return (ERROR);
	if (!(str = add_preci(info, space->preci, str))
	|| !(str = add_width(info, space->width, str)))
	{
		free_space(space);
		return (ERROR);
	}
	info->nbyte += ft_putstr_n(str, ft_strlen(str));
	free_space(space);
	return (0);
}
