

#include "ft_printf.h"

int		ft_print_string(va_list arg, t_info *info)
{

	char *str;

	str = (char *)va_arg(arg, char *);

	info->nbyte += ft_putstr_n(str, ft_strlen(str));

	return (0);
}

