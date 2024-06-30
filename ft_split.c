/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:20:47 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/23 17:50:10 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*p;

	total = size * count;
	if (count && size != total / count)
		return (NULL);
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

char	*copy(const char *s, int j, int k)
{
	char	*str;
	int		i;

	str = (char *)ft_calloc((k - j + 1), 1);
	if (!str)
		return (NULL);
	i = 0;
	while (j < k)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	return (str);
}

int	coun_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

int	free_memory(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		j;
	int		k;
	int		i;

	i = 0;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	split = (char **)ft_calloc((coun_word(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (i < coun_word(s, c))
	{
		while (s[j] == c)
			j++;
		k = j;
		while (s[k] != c && s[k])
			k++;
		split[i] = copy(s, j, k);
		j = k;
		(!split[i++]) && (free_memory(split));
	}
	return (split);
}
