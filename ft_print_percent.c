#include "ft_printf.h"


int		ft_print_percent(t_info *info)
{
	char c;
//	c = (char *)va_arg(arg, char *);
//	info->nbyte += ft_putstr_n(c, ft_strlen(c));

	c = '%';
	info->nbyte += ft_putchar(c);
	return (0);
}
