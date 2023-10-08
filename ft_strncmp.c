/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:30:13 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 19:22:44 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	int	i;

	while (length-- > 0 && (first[i] || second[i]))
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
