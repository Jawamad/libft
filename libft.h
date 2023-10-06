/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:02:21 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/06 11:28:28 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

size_t	ft_strlcpy(char *  dest , const char *  src , size_t  size );

void	*ft_memset(void *pointer, int value, size_t count);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	ft_bzero(void *s, size_t n);

char 	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int				ft_isalnum(int c);

int				ft_isdigit(int c);

int				ft_isascii(int c);

int				ft_isalpha(int c);

int				ft_isprint(int c);

int 			ft_strlen(char *str);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_strncmp(const char * first, const char * second, size_t length);
#endif