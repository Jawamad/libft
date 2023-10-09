/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:27:47 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/09 13:48:14 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strldup(const char *s, int len)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int	ft_countchar(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	int		i;
	int		j;

	strarray = malloc(sizeof(char *) * ft_countword(s, c) + 1);
	if (!strarray)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			strarray[j] = ft_strldup(&s[i], ft_countchar(&s[i], c));
			j++;
		}
		while (s[i] != c)
			i++;
	}
	strarray[j] = 0;
	return (strarray);
}
