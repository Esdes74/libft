/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:05:26 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/09 23:09:29 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	save;

	len = 0;
	save = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
			save = len;
		len++;
	}
	if (c == '\0')
		return (s + len);
	if (save == 0)
		return (0);
	else
		return (s + save);
}
