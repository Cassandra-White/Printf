#include "libft.h"

char	*ft_strndup(const char *source, int size)
{
	char	*cpy;
	int		i;

	if (!(cpy = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = -1;
	while (++i < size)
		cpy[i] = source[i];
	cpy[i] = '\0';
	return (cpy);
}
