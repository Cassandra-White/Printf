#include "ft_printf.h"

char	*start_sign(t_info *info, char *str)
{
	if(str[0] == '-')
	{
		info->sign = '-';
		str++;
	}

	return(str);
}

char *add_sign(t_info *info, char *space_width, int i)
{
	if (info->sign == '\0')
		return(space_width);
	if ((info->zero == ENABLE && info->preci == DISABLE) 
			||info->right_space == ENABLE)
		space_width[0] = info->sign;
	else
		space_width[info->width - i - 1] = info->sign;
	return (space_width);
}
