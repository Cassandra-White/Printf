/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:33:14 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:33:16 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dests, const void *srcs, size_t size)
{
	char		*dest;
	const char	*src;

	dest = dests;
	src = srcs;
	if (!dests && !srcs)
		return (0);
	while (size-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dests);
}
