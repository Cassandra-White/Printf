

#include "ft_printf.h"


int		ft_print_int(va_list arg, t_info *info)
{
	char *str;

	str = ft_itoa((int)va_arg(arg, int));
	info->nbyte += ft_putstr_n(str , ft_strlen(str));
	return(0);
}
