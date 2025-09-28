/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:25:28 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 11:28:05 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Create a function that reverses a 
 * given array of integers (the first element becomes
the last, and so on).
• The function takes two arguments: 
a pointer to an int and the number of elements
in the array
*/

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	counter = 0;
	while (counter < size - 1)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[counter];
		tab[counter] = temp;
		counter++;
		size--;
	}
}

int	main(void)
{
	int arr[6] = { 22, 55, 77, 42, 98, 66};

	printf("%d %d %d %d %d %d |\n", arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
	ft_rev_int_tab(arr   , 6);
	printf("%d %d %d %d %d %d\n", arr[0], arr[1],arr[2],arr[3],arr[4],arr[5]);
	return (0);
}
