/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:40:58 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:41:01 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedchar)
{
	char	*result;
	int		i;

	i = 0;
	result = 0;
	if (searchedchar == 0)
	{
		while (string[i])
			i++;
		return ((char*)&string[i]);
	}
	while (string[i])
	{
		if ((char)searchedchar == string[i])
			result = (char *)(string + i);
		i++;
	}
	return (result);
}
