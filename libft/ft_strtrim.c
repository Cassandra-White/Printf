/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:41:18 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:41:20 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (ft_size(s1[start], set))
		start++;
	if (start == end)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	while (ft_size(s1[end - 1], set))
		end--;
	str = ft_substr(s1, start, (end - start));
	return (str);
}
