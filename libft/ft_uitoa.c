
#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char		*str;
	unsigned int	div;
	unsigned int	i;

	div = n;
	i = (n == 0) ? 1 : 0;
	while (div != 0)
	{
		div = div / 10;
		i++;
	}
	if(!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i] = '\0';
	str[0] = '0';
	while (n != 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;

	}
	return (str);


}
