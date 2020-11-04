#include "ft_printf.h"


static char *add_width(t_info *info, char *space_width, char c)
{
	if(info->width < 2)
		info->width = 1;
	if(info->right_space == DISABLE && info->zero == ENABLE)
		info->padding = '0';
	if(!(space_width = add_space(info->width, info->padding)))
		return (0);
	if (info->right_space == ENABLE)
		space_width[0] = c;
	else
		space_width[info->width -1] = c;
	return (space_width);
}



int		ft_print_percent(t_info *info)
{
	char c;
	char *str;
	t_space *space;

	c = '%';
	space = start_space();
	if(!(str = add_width(info, space->width, c)))
	{
		free(space);
		return (ERROR);
	}

	info->nbyte += ft_putstr_n(str, ft_strlen(str));
	free(space);
	return (0);
}
