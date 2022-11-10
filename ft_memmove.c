/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:35:25 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/10 20:03:28 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;
	char	c;

	len = 0;
	while (len < n)
	{
		c = ((char *)src)[len];
		((char *)dest)[len] = c;
		len++;
		printf("A");
	}
	return (dest);
}
