/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:24:17 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/09 23:31:15 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	len;
	size_t	len_test;

	if (little == "")
		return (big);
	len = 0;
	len_test = 0;
	while (big[len] != '\0')
	{
		while (big[len] == little[len_test])
		{
			len++;
			len_test++;
		}
		if (little[len_test] == '\0')
			return (big + len - len_test);
		else
			len_test = 0;
		len++;
	}
	return (0);
}
