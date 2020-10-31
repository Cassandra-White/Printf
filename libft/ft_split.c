/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <akrissan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:37:10 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/17 14:37:14 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_wordfree(char **tab, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char			*ft_wordtab(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(word = malloc(sizeof(*word) * i + 1)))
	{
		free(word);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int				ft_wordnbr(char const *s, char c)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		while (s[i] && (s[i] != c))
			i++;
		word++;
	}
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		wordnbr;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	wordnbr = ft_wordnbr(s, c);
	if (!(tab = malloc(sizeof(*tab) * (wordnbr + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(tab[i] = ft_wordtab(s, c)))
				return (ft_wordfree(tab, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
