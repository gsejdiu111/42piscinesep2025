/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:39:57 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 08:46:10 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Create a function that takes a pointer to
 * an int as a parameter and sets the value
of that int to 42
*/

//#include <unistd.h>
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	i;

	i = 1;
	printf("%d", i);
	ft_ft(&i);
	printf("%d", i);
	return (0);
}*/
