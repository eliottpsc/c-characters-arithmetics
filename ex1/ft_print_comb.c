/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:42:40 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/05 15:37:17 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putnbr(int n);
int		units(int number);
int		tens(int number);
int		hundreds(int number);

void	ft_print_comb(void)
{
	int	number;

	number = 012;
	while (number <= 789)
	{
		if (hundreds(number) < tens(number) && tens(number) < units(number))
		{
			if (number < 100)
				write(1, "0", 1);
			ft_putnbr(number);
			if (number < 789)
				write(1, ", ", 2);
		}
		number++;
	}
}

int	tens(int number)
{
	return ((number % 100) / 10);
}

int	hundreds(int number)
{
	return (number / 100);
}

int	units(int number)
{
	return (number % 10);
}

void	ft_putnbr(int n)
{
	int	i;

	if (n == 0)
		return ;
	i = n % 10;
	n /= 10;
	ft_putnbr(n);
	i += 48;
	write(1, &i, 1);
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
