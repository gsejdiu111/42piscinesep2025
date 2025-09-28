/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:25:28 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/22 16:49:01 by gsejdiu          ###   ########.fr       */
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
//	int	arr_rev[6];

	counter = 1;
	while (counter < size-1)
	{	
		int	temp = tab[counter];
		tab[counter] = tab[size - counter];
		tab[counter - counter] = temp;
	        //printf("%d%d TAB", tab[size - counter ]);
		//arr_rev [counter] = tab [size - counter];
		counter++;
	  //      printf("%d REV",  temp );
	}
//	printf("%d REV",  tab );

	//tab = arr_rev;
}

int	main(void)
{
	int arr[6] = { 22, 55, 77, 42, 98, 66};
	int	*arrptr;

//	arrptr = &arr;
	printf("%d", arr[1]);
	ft_rev_int_tab(arr   , 6);
	printf("%d", arr[1]);
	return (0);
}
