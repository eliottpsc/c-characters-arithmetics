/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:10:24 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/07 17:52:12 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);
void	ft_init_array(int arr[9], int n);
void	ft_print_array(int arr[9], int n);

void	ft_print_combn(int n)
{
	int	ind;
	int	arr[9];

	ft_init_array(arr, n);
	ind = n - 1;

	while (true)
	{
		if (arr[ind] == (9 - n + 1 + ind))
		{
			ind--;
			if (ind == -1)	// we reached biggest value
				return ;
			if (arr[ind] == (9 - n + 1 + ind))
				continue;
			arr[ind] = arr[ind] + 1;
			//arr[ind] + 1;
			ind++;
			arr[ind] = arr[ind-1] + 1;
			ft_print_array(arr, n);
		}
		else
		{
			arr[ind]++;
			ft_print_array(arr, n);
		}
	}
}

void	ft_print_array(int arr[9], int n)
{
	int	i = 0;

	while (i < n)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf(", ");
}

void	ft_init_array(int arr[9], int n)
{
	int	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_print_array(arr, n);
}

int	main(void)
{
	//int	myarr[9];
	//int	n = 6;
	
	//ft_init_array(myarr, n);
	//ft_print_array(myarr, n);
	ft_print_combn(4);
}
