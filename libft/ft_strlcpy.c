/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:39:10 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:39:12 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!dest)
		return (0);
	i = ft_strlen((char *)src);
	if (i >= size)
		len = size - 1;
	else
		len = i;
	if (size)
	{
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (i);
}
