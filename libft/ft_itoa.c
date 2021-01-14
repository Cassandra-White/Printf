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
