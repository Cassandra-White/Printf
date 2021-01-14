#include "ft_printf.h"

static void	complet_flag(char **src, t_info *info)
{
	while (use_in_set(**src, FLAG))
	{
		**src == '-' ? info->right_space = ENABLE : ZERO;
		**src == '0' ? info->zero = ENABLE : ZERO;
		(*src)++;
	}
}

static void	complet_width(char **src, va_list arg, t_info *info)
{
	char	*copy;

	if (!(**src == '*' || use_in_set(**src, DIGIT)))
		return ;
	if (**src == '*')
	{
		info->width = va_arg(arg, int);
		(*src)++;
	}
	else
	{
		copy = ft_strndup(*src, ft_strlen(*src));
		info->width = ft_atoi(copy);
		free(copy);
		while (use_in_set(**src, DIGIT))
			(*src)++;
	}
	if (info->width < 0)
	{
		info->right_space = ENABLE;
		info->width = -info->width;
	}
}

static void	complet_preci(char **src, va_list arg, t_info *info)
{
	char	*copy;

	if (!(**src == '.'))
		return ;
	(*src)++;
	if ((**src) == '*')
	{
		info->preci = va_arg(arg, int);
		(*src)++;
	}
	else
	{
		copy = ft_strndup(*src, ft_strlen(*src));
		info->preci = ft_atoi(copy);
		free(copy);
		while (use_in_set(**src, DIGIT))
			(*src)++;
	}
	if (info->preci < 0)
	{
		info->preci = DISABLE;
	}
}

int			struct_complet(char **src, va_list arg, t_info *info)
{
	if (**src == '\0')
		return (ERROR);
	complet_flag(src, info);
	complet_width(src, arg, info);
	complet_preci(src, arg, info);
	if (use_in_set(**src, TYPE) == ERROR)
		return (ERROR);
	return (0);
}
