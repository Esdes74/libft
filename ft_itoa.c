/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:23:17 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/24 10:07:48 by eslamber         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(int n)
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
	long int	nbr;
	int			len;
	char		*new;

	len = calc_len(n);
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (0);
	nbr = n;
	if (n < 0)
		nbr = nbr * -1;
	if (n < 0)
		new[0] = '-';
	new[len] = '\0';
	len--;
	while (nbr > 9)
	{
		new[len] = '0' + (nbr % 10);
		nbr = nbr / 10;
		len--;
	}
	new[len] = '0' + nbr;
	return (new);
}
