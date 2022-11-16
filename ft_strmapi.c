/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:12:06 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/15 17:20:48 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *src, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	ind;

	ind = 0;
	new = ft_strdup(src);
	while (new[ind] != '\0')
	{
		new[ind] = f(ind, new[ind]);
		ind++;
	}
	return (new);
}
