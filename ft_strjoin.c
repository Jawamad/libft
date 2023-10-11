/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:16:21 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/11 18:32:26 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*str1;
	char	*str2;
	int		size;

	str1 = (char *)s1;
	str2 = (char *)s2;
	size = ft_strlen(str1) + ft_strlen(str2) + 1;
	newstr = malloc(sizeof(char) * size);
	if (!newstr)
		return (NULL);
	ft_strlcat(newstr, str1, ft_strlen(str1));
	ft_strlcat(newstr, str2, ft_strlen(str2));
	return (newstr);
}
