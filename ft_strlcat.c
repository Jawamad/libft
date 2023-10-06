/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:42:47 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/06 11:28:45 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int k;
	
	i = ft_strlen(dst);
	k = 0;
	while (src[k] && i + k < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	return (i + ft_strlen(src));
}
