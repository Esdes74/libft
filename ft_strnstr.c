/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:24:17 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/10 16:20:13 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	len;
	size_t	len_test;
	char	*c;

	c = "";
	if (little == c)
		return ((char *)big);
	len = 0;
	len_test = 0;
	while (big[len] != '\0' && len < n)
	{
		while (big[len] == little[len_test] && big[len] != '\0')
		{
			len++;
			len_test++;
		}
		printf("len = %ld len_test = %ld\n", len, len_test);
		if (little[len_test] == '\0')
			return ((char *) big + len - len_test);
		else
			len_test = 0;
		len++;
	}
	return (0);
}
