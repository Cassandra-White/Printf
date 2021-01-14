#include "libft.h"

char	*ft_itoa_base(unsigned int n, const char *base)
{
	unsigned int	div;
	unsigned int	len;
	unsigned int	base_len;
	char			*str;

	div = n;
	len = (n == 0) ? 1 : 0;
	base_len = (unsigned int)ft_strlen((char *)base);
	while (div != 0)
	{
		div = div / base_len;
		len++;
	}
	if (!(str = ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	str[0] = '0';
	while (n != 0)
	{
		len--;
		str[len] = base[(n % base_len)];
		n = n / base_len;
	}
	return (str);
}
