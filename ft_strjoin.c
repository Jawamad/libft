/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:16:21 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 18:35:59 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2)+1;
	newstr = malloc(sizeof(char) * size);
	if (!newstr)
		return (NULL);
	ft_strlcat(newstr, s1, ft_strlen(s1));
	ft_strlcat(newstr, s2, ft_strlen(s2));
	return (newstr);
}
