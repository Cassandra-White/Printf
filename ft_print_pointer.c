
#include "ft_printf.h"


int		ft_print_pointer(va_list arg, t_info *info)
{
	char	*str;

	str = ft_lltoa_base(va_arg(arg, long long), HEX_LOW);
	info->nbyte += ft_putstr_n(str,ft_strlen(str));

	return (0);
}
