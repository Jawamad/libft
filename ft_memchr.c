/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:42:34 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/11 16:02:34 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*b;

	b = (char *) s;
	i = 0;
	while (i < n)
	{
		if (b[i] == c)
			return (b + i);
		i++;
	}
	return (NULL);
}
