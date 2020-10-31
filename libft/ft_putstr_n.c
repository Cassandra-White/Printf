
#include "libft.h"

int	ft_putstr_n(char *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);

}
