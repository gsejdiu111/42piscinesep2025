/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:05:23 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 11:14:04 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function divides the value pointed 
 * to by ‘a’ by the value pointed to by ‘b’. The
result of the division is stored in the 
integer pointed to by ‘a’, while the remainder
is stored in the integer pointed to by ‘b’
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;

	aa = *a;
	*a = *a / *b;
	*b = aa % *b;
}

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	int	a;
	int	b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("a=%d, b=%d,", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div=%d, rem=%d,", a, b);
	return (0);
}
