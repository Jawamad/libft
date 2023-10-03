/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:10:36 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/03 14:19:08 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *  dest , const char *  src , size_t  size )
{
	int i = 0;

	if ( dest == NULL || src == NULL)
		return (NULL);
	if (size > 0)
	{
		while (src[i] && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = "\0";
	}
	return (ft_strlen(src));
}