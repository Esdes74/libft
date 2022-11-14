/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:07:36 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/14 15:41:38 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_in(const char src, const char *test)
{
	size_t	ind;

	ind = 0;
	while (test[ind] != '\0')
	{
		if (test[ind] == src)
			return (1);
		ind++;
	}
	return (0);
}

size_t	count(const char *src, const char *set)
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

char	*ft_strtrim(const char *src, const char *set)
{
	size_t	len;
	size_t	len_new;
	char	*new;

	len = 0;
	len_new = count(src, set);
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
