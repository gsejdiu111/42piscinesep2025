/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:46:35 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/22 15:35:30 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *
 * Create a function that takes a pointer to 
 * a pointer to a pointer to a pointer to a
pointer to a pointer to a pointer to a pointer 
to a pointer to an int as a parameter
and sets the value of that int to “42”.
void ft_ultimate_ft(int *********nbr)
*/

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int	n;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	n = 7;
	ptr1 = &n;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("%d", n);
	ft_ultimate_ft(ptr9);
	printf("%d", n);
	return (0);
}*/
