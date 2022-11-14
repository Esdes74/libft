/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:32:13 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/14 20:49:21 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_in(const char src, const char test)
{
	if (test == src)
		return (1);
	return (0);
}

size_t	count(const char *src, const char set)
{
	size_t	nbr;
	size_t	ind;

	nbr = 0;
	ind = 0;
	while (src[ind] != '\0')
	{
		if (ft_in(src[ind], set) == 0)
			nbr++;
		ind++;
	}
	return (nbr);
}

char	*ft_split(const char *src, const char set)
{
	size_t	len;
	size_t	len_new;
	char	*new;

	len = 0;
	ft_putstr_fd("AAA", 1);
	len_new = count(src, set);
	printf("len_new = %ld\n", len_new);
	new = (char *) malloc(sizeof(char) * len_new + 1);
	if (new == 0)
		return (0);
	len_new = 0;
	while (src[len] != '\0')
	{
		if (ft_in(src[len], set) == 0)
			new[len_new++] = src[len];
		len++;
	}
	new[len_new] = '\0';
	return (new);
}
