/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 07:43:33 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 08:04:22 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = 0;
	while(size > a)
	{
		while(size > b)
		{
			if( tab[b] > tab[a])
			{
				tmp = tab[b];
				tab[b] = tab[b + 1];
				tab[b+1] = tmp;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
#include <stdio.h>
	int	arr[5] = {114, 22, 2, 55, 8};
	ft_sort_int_tab(arr, 5);
	printf("%d \n", arr[0]);
	return (0);
}
