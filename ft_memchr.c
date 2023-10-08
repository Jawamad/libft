/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:42:34 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 18:59:33 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*b;

	b = (unsigned char *) s;
	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (b + i);
		i++;
	}
	return (NULL);
}
