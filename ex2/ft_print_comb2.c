/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:39:20 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/05 18:18:07 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX 100

void	ft_print_comb2(void);
void	ft_putnbr(int n);

void	ft_print_comb2(void)
{
	int	pair1;
	int	pair2;

	pair1 = 0;
	while (pair1 < 100)
	{
		pair2 = pair1 + 1;
		while (pair2 < 100)
		{
			if (pair1 < 10)
				write(1, "0", 1);
			ft_putnbr(pair1);
			write(1, " ", 1);
			if (pair2 < 10)
				write(1, "0", 1);
			ft_putnbr(pair2);
			if (pair1 != 98)
				write(1, ", ", 2);
			pair2++;
		}
		pair1++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = (nb % 10) + 48;
	if (nb < 10)
	{
		write(1, &n, 1);
		return ;
	}
	nb /= 10;
	ft_putnbr(nb);
	write(1, &n, 1);
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
