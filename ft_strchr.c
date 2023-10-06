/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:08:44 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/06 11:28:25 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	char *b;

	b = (char *) s;
	i = 0;
	while(b[i])
	{
		if (b[i] == c)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
