#include <stdio.h>
#include "ft_printf.h"


static void	info_init(t_info *info)
{
	info->right_space = DISABLE;
	info->width = DISABLE;
	info->preci = DISABLE;
	info->zero = DISABLE;
	info->padding = ' ';
	info->sign = '\0';
}


static int	ft_print_match(char *src, va_list arg, t_info *info)
{
	if (*src == 'c')
		return (ft_print_char(arg, info));
	if (*src == 's')
		return (ft_print_string(arg, info));
	if (*src == 'd' || *src == 'i')
		return (ft_print_int(arg, info));
	if (*src == 'u')
		return (ft_print_unsigned_int(arg, info));
	if (*src == 'x')
		return (ft_print_hexa(arg, info, HEX_LOW));
	if (*src == 'X')
		return (ft_print_hexa(arg, info, HEX_UP));
	if (*src == 'p')
		return (ft_print_pointer(arg, info));
	if (*src == '%')
		return (ft_print_percent(info));
	else
		return(ERROR);

}



static int		ft_pro_format(char *src, va_list arg)
{
	t_info info;

	info.nbyte = 0;
	if ( src == 0)
		return (ERROR);
	while (*src)
	{
		while(*src != '%' && *src)
		{
			info.nbyte += ft_putchar(*src);
			src++;
		}
		
		if (*src == '%')
		{
			src++;
			info_init(&info);
			if(struct_complet(&src, arg, &info) == ERROR)
				return (ERROR);
			if ((ft_print_match(src, arg, &info) == ERROR))
				return (ERROR);
			src++;
		}

	}
	return (info.nbyte);

}


int		ft_printf(const char *src, ...)
{
	va_list	arg;
	int		nbyte;

	va_start(arg, src);
//	printf("BITE");
	if ((nbyte = ft_pro_format((char *)src, arg)) == ERROR)
		return (ERROR);
	va_end(arg);
	return (nbyte);
}




