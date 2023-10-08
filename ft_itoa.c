/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:40:38 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 18:39:24 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countunit(long int n)
{
	int	count;

	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	number;
	int			unit;
	int			sign;
	char		*res;

	sign = 1;
	if (n < 0)
		sign = -1;
	number = n * sign;
	unit = ft_countunit(number);
	if (sign < 0)
		unit++;
	res = malloc(sizeof(char) * (unit + 1));
	res[unit + 1] = "\0";
	while (number > 0)
	{
		res[unit--] = number % 10 + '0';
		number = number / 10;
	}
	if (sign < 0)
		res[unit] = '-';
	return (res);
}
