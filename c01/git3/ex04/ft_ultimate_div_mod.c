/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:05:23 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 09:38:54 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function divides the value pointed 
 * to by ‘a’ by the value pointed to by ‘b’. The
result of the division is stored in the 
integer pointed to by ‘a’, while the remainder
is stored in the integer pointed to by ‘b’
*/
//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;

	aa = *a;
	*a = *a / *b;
	*b = aa % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 47;
	b = 10;
	printf("a=%d, b=%d,", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div=%d, rem=%d,", a, b);
	return (0);
}*/
