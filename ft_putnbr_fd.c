/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:02:52 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/08 19:24:52 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	if (n < 0)
	{
		number = -n;
		ft_putchar_fd('-', fd);
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + '0', fd);
}
