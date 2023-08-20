/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <florian.mul@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:02:21 by flmuller          #+#    #+#             */
/*   Updated: 2023/08/20 23:08:18 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	ft_bzero(void *s, size_t n);

int				ft_isalnum(int c);

int				ft_isdigit(int c);

int				ft_isascii(int c);

int				ft_isalpha(int c);

int				ft_isprint(int c);

int 			ft_strlen(char *str);

#endif