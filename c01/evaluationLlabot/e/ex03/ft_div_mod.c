/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:51:43 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 11:10:06 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function divides ‘a’ by ‘b’ and 
 * stores the result in the integer pointed to by
‘div’. It also stores the remainder of the division 
of ‘a’ by ‘b’ in the integer pointed
to by ‘mod’.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	
	int		a;
	int		b;
	int		div;
	int		mod;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	div = 0;
	mod = 0;
	printf("%d ", div);
	printf("%d ", mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d ", div);
	printf("%d ", mod);
	return (0);
}
