

#include "ft_printf.h"

int		ft_print_unsigned_int(va_list arg, t_info *info)
{
	
	char *str;

	str = ft_uitoa((unsigned int)va_arg(arg, int));
	if(str == NULL)
		return (ERROR);
	info->nbyte += ft_putstr_n(str, ft_strlen(str));
	return (0);
}
