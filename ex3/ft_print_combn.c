/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:11:14 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/09 13:07:09 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int *arr, int n)
{
	int	iter;
	int	c;

	iter = 0;
	while (iter < n)
	{
		c = arr[iter] + '0';
		write(1, &c, 1);
		iter++;
	}
	if (arr[0] >= (10 - n + 0))
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_init_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];
	int	i;

	i = 0;
	arr[0] = 0;
	while (i > -1)
	{
		while (i < n - 1)
		{
			i++;
			arr[i] = arr[i - 1] + 1;
		}
		while (arr[i] <= (10 - n + i))
		{
			ft_print_array(arr, n);
			arr[i]++;
		}
		if (arr[0] >= (10 - n + i))
			break ;
		while (arr[i] >= (10 - n + i))
			i--;
		arr[i]++;
	}
}
/*
int	main(void)
{
	ft_print_combn(4);
	return (0);
}
*/
