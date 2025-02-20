/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:44:59 by bchen             #+#    #+#             */
/*   Updated: 2024/11/29 18:45:22 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*dest;

	count = ft_strlen(s1) + 1;
	dest = (char *)malloc(count);
	if (dest)
	{
		dest = (char *) ft_memcpy(dest, s1, count);
	}
	else
		return (NULL);
	return (dest);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = (char *) malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

char	**fillsplit(char **ssplit, char const *s, char c)
{
	size_t	i;
	int		j;
	size_t	k;

	i = 0;
	k = 0;
	j = -1;
	while (i <= (size_t)ft_strlen(s))
	{
		if (s[i] != c && j == -1)
			j = i;
		else if ((s[i] == c || i == (size_t)ft_strlen(s)) && j != -1)
		{
			ssplit[k] = ft_substr(s, j, i - j);
			if (!ssplit[k])
				if (freessplit(ssplit, k) == NULL)
					return (NULL);
			k++;
			j = -1;
		}
		i++;
	}
	ssplit[k] = NULL;
	return (ssplit);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplit;

	ssplit = (char **)malloc((mallocsize(s, c) + 1) * sizeof(char *));
	if (!ssplit)
		return (NULL);
	ssplit = fillsplit(ssplit, s, c);
	if (!ssplit)
		return (freessplit(ssplit, mallocsize(s, c)));
	return (ssplit);
}
