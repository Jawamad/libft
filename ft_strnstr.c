/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:31:20 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 18:48:35 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	k;

	i = 0;
	if (little[i])
	{
		while (big[i + k] && i + k < len)
		{
			if (big[i + k] == little[k])
				k++;
			else if (!little[k])
				return (big + i);
			else
			{
				i++;
				k = 0;
			}
		}
		if (!little[k])
			return (big + i);
		return (NULL);
	}
	return (big);
}
