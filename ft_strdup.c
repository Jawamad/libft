/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:42:27 by flmuller          #+#    #+#             */
/*   Updated: 2023/10/06 11:50:55 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s)
{
	int i;
	char *res;

	i = 0;
	res = malloc(ft_strlen(s) + 1);
	if(!res)
		return (NULL);
	while (s[i])
	{
		res[i] = s[i];
		i++
	}
	res[i] = "\0";
	return (res);
}
