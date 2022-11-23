/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:05:26 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/23 11:19:02 by eslamber         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	long long	save;

	len = 0;
	save = -1;
	while (s[len] != '\0')
	{
		if (s[len] == (char) c)
			save = len;
		len++;
	}
	if (c == '\0')
		return ((char *)s + len);
	if (save == -1)
		return (0);
	else
		return ((char *)s + save);
}
