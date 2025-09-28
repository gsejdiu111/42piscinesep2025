/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:46:35 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/21 17:55:23 by gsejdiu          ###   ########.fr       */
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

void	main(void)
{
	int	ptr;

	ptr = 7;
	*ptr = ptr;
	**ptr = *ptr;
	***ptr = **ptr;
	****ptr = ***ptr;
	*****ptr = ****ptr;
	******ptr = *****ptr;
	*******ptr = ******ptr;
	********ptr = *******ptr;
	*********ptr = ********ptr;
	printf("%d", ptr);
	ft_ultimate_ft(&*********ptr);
	printf("%d", ptr);
	return (0);
}
