/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrazina <egrazina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:34:33 by egrazina          #+#    #+#             */
/*   Updated: 2022/04/12 13:14:54 by egrazina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *str, char c)
{
	int	con;
	int	i;
	int	w;

	con = 0;
	w = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && con == 0)
		{
			con = 1;
			w++;
		}
		else if (str[i] == c)
			con = 0;
		i++;
	}
	return (w);
}

int	ft_wordsize(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_tosplit(const char *s, char c, char **split)
{
	int	len;
	int	con;
	int	i;
	int	j;

	j = 0;
	i = 0;
	len = 0;
	con = 0;
	while (s[i])
	{
		if (s[i] != c && con == 0)
		{
			con = 1;
			len = ft_wordsize(s + i, c);
			split[j] = (char *)ft_calloc(len + 1, sizeof(char));
			if (split[j] != NULL)
				ft_strlcpy (split[j], s + i, len + 1);
			j++;
		}
		else if (s[i] == c)
			con = 0;
		i++;
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (0);
	words = ft_countwords(s, c);
	split = (char **) ft_calloc(words + 1, sizeof(char **));
	if (!split)
		return (NULL);
	split = ft_tosplit(s, c, split);
	split[words] = 0;
	return (split);
}
