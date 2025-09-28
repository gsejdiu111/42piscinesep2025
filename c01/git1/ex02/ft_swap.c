/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:58:03 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/21 18:50:35 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that swaps the values 
 * of two integers using their addresses received
as parameters
*/

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	aa;
	int	bb;

	aa = 4;
	bb = 2;
	printf("%d", aa);
	printf("%d", bb);
	ft_swap (&aa, &bb);
	printf("%d", aa);
	printf("%d", bb);
	return (0);
}
