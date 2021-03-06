#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define TYPE "cspdiuxX%"
# define FLAG "-0"
# define DIGIT "0123456789"
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

# define ERROR -1
# define DISABLE -1
# define ENABLE 1
# define ZERO 0

typedef	struct	s_info
{
	int		nbyte;
	int		right_space;
	int		width;
	int		preci;
	int		zero;
	char	padding;
	char	sign;
}				t_info;

typedef struct	s_space
{
	char *preci;
	char *width;
}				t_space;

int				ft_printf(const char *src, ...);
int				ft_print_char(va_list arg, t_info *info);
int				ft_print_string(va_list arg, t_info *info);
int				ft_print_int(va_list arg, t_info *info);
int				ft_print_unsigned_int(va_list arg, t_info *info);
int				ft_print_hexa(va_list arg, t_info *info, char *base);
int				ft_print_pointer(va_list arg, t_info *info);
int				ft_print_percent(t_info *info);
int				struct_complet(char **src, va_list arg, t_info *info);
t_space			*start_space(void);
char			*add_space(int info_width, char info_padding);
void			free_space(t_space *space);
char			*start_sign(t_info *info, char *str);
char			*add_sign(t_info *info, char *str, int i);

#endif
