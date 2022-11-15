/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:37:06 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/15 12:17:25 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	calc_len(int n)
{
	int			len;
	long int	nbr;

	len = 1;
	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*new;

	len = calc_len(n);
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (0);
	if (n < 0)
		new[0] = '-';
	new[len] = '\0';
	len--;
	while (n > 10)
	{
		new[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	new[len] = n % 10;
	return (new);
}
