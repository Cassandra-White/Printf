
#include "ft_printf.h"

int	ft_print_hexa(va_list ap, t_info *info, char *base)
{
	char	*str;

	str = ft_itoa_base((int)va_arg(ap, int), base);
	if (str == NULL)
		return (ERROR);	

	info->nbyte += ft_putstr_n(str, ft_strlen(str));

	return (0);

}
