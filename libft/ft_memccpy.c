/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:31:30 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:31:32 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest && !src)
		return (0);
	i = 0;
	destination = (unsigned char*)dest;
	source = (unsigned char *)src;
	while (n-- > 0)
	{
		destination[i] = source[i];
		if ((unsigned char)c == destination[i])
			return ((void *)(dest + i + 1));
		i++;
	}
	return (0);
}
