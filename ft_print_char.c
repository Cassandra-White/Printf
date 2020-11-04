#include "ft_printf.h"

static char *add_width(t_info *info, char *space_width)
{
	info->width--;
	if (info->width < 1)
		return ("");
	space_width = add_space(info->width, info->padding);
	if (space_width == 0)
		return (0);
	return (space_width);

}




int		ft_print_char(va_list arg, t_info *info)
{

	char c;
	char *str;
	t_space *space;

	c = (char)va_arg(arg, int);
	if (info->preci > 0)
		return(ERROR);
	space = start_space();
	if ((str = add_width(info , space->width)) == 0)
	{
		free_space(space);
		return(ERROR);
	}
	if(info->right_space == ENABLE)
		info->nbyte += ft_putchar(c) + ft_putstr(str);
	else
		info->nbyte += ft_putstr(str) + ft_putchar(c);

	free_space(space);
	return (0);
}
