#include "ft_printf.h"

int		ft_print_char(va_list arg, t_info *info)
{

	char c;

	c = (char)va_arg(arg, int);

	info->nbyte += ft_putchar(c);

	return (0);
}
