/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:39:59 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/20 03:00:46 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *scd, size_t lgth)
{
	char			*firststr;
	char			*scdstr;
	size_t			i;

	if (!first && !scd)
		return (0);
	firststr = (char *)first;
	scdstr = (char *)scd;
	i = 0;
	if (lgth == 0)
		return (0);
	while (i < lgth - 1 && firststr[i] && scdstr[i] && firststr[i] == scdstr[i])
		i++;
	return ((unsigned char)firststr[i] - (unsigned char)scdstr[i]);
}
