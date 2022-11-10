/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:28:01 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/09 18:32:38 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		*(char *)(s + len) = (unsigned char) c;
		len++;
	}
	return (s);
}

int	main(void)
{
	int	*test;
	int	test2;

	test2 = 2;
	test = (int *) malloc(sizeof(int) * 8);
	ft_memset(test, test2, 3);
	for (int i = 0; i < 3; i++)
		printf("%d\n", test[i]);
}
