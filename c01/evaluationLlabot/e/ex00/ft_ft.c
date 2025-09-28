/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:39:57 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 10:56:21 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that takes a pointer to
 * an int as a parameter and sets the value
of that int to 42*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
		
	int n = atoi(argv[1]);
	ft_ft(&n);
	printf("%d\n", n);
	return (0);
}
