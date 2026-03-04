/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:40:22 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/04 22:02:33 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
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
	ft_putnbr(123456);
	write(1, "\n", 1);
	ft_putnbr(2);
	write(1, "\n", 1);
	ft_putnbr(1001);
	write(1, "\n", 1);
	ft_putnbr(-125);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(32767);
	write(1, "\n", 1);
	ft_putnbr(-32768);
	write(1, "\n", 1);
	ft_putnbr(2147483646);
        write(1, "\n", 1);
	ft_putnbr(2147483648);	
        write(1, "\n", 1);
	ft_putnbr(2147483647);
        write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
}
*/
