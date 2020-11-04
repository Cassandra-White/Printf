/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:30:36 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:30:40 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_itoa(int n)
{
	int		div;
	int		len;
	char	*res;

	div = n;
	len = (n <= 0) ? 1 : 0;
	while (div != 0)
	{
		div = div / 10;
		len++;
	}
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	res[len] = '\0';
	if (n <= 0)
		res[0] = (n == 0) ? '0' : '-';
	while (n != 0)
	{
		len--;
		res[len] = (n > 0) ? (n % 10) + '0' : -(n % 10) + '0';
		n = n / 10;
	}
	return (res);
}



/*
static int		ft_sizetab(unsigned int numb)
{
	int size;

	size = 0;
	while (numb >= 10)
	{
		numb = numb / 10;
		size++;
	}
	size++;
	return (size);
}

char			*ft_itoa(int n)
{
	unsigned int	numb;
	char			*str;
	int				size;

	size = 0;
	if (n >= 0)
		numb = n;
	if (n < 0)
	{
		numb = n * -1;
		size = 1;
	}
	size = size + ft_sizetab(numb);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (0);
	str[size] = '\0';
	while (size--)
	{
		if (numb)
			str[size] = (numb % 10) + '0';
		if (size == 0 && n < 0)
			str[size] = '-';
		numb = numb / 10;
	}
	return (str);
}*/
