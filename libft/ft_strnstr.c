/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:40:31 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:40:33 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(src[0]))
		return ((char*)dest);
	while (dest[i] && i < len)
	{
		j = 0;
		if (dest[i] == src[j])
		{
			j++;
			while (src[j] && dest[i + j] == src[j] && (i + j) < len)
				j++;
			if (src[j] == '\0')
				return ((char*)&dest[i]);
		}
		i++;
	}
	return (0);
}
