
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define FLAG "-0.*"
# define DIGIT "0123456789"
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

# define ERROR -1
# define DISABLE -1
# define ENABLE 1
# define ZERO 0


typedef struct	s_info
{
	int	nbyte;
	int		right_space;
	int		width;
	int		preci;
	int		zero;
	char	padding;
	char	sign;
}			t_info;


int		ft_printf(const char *src, ...);

int		ft_print_char(va_list arg, t_info *info);
int		ft_print_string(va_list arg, t_info *info);
int		ft_print_int(va_list arg, t_info *info);
int		ft_print_unsigned_int(va_list arg, t_info *info);
int		ft_print_hexa(va_list arg, t_info *info, char *base);
int		ft_print_pointer(va_list arg, t_info *info);
int		ft_print_percent(t_info *info);
int		struct_complet(char **src,va_list arg, t_info *info);

#endif
