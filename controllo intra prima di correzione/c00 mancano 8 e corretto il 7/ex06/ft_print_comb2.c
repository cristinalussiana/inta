/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clussian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:31:44 by clussian          #+#    #+#             */
/*   Updated: 2023/09/26 14:26:47 by clussian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	stampa(int a, int b)
{
	char	c;

	c = 48 + a / 10;
	write(1, &c, 1);
	c = 48 + a % 10;
	write(1, &c, 1);
	write(1, " ", 1);
	c = 48 + b / 10;
	write(1, &c, 1);
	c = 48 + b % 10;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			stampa (a, b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b ++;
		}
		a++;
	}
}
