/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:38:53 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:38:57 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	dstl;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	while (dst[i] && i < size)
		i++;
	dstl = i;
	if (i < size)
	{
		while (i < size - 1 && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (size - 1 < dstl)
		return (size + srcl);
	return (dstl + srcl);
}
