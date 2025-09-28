/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:26:56 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 09:39:41 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Create a function that displays a 
 * string of characters on the standard output.
 */
//#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	write(1, str, 10);
}
/*
int	main(void)
{
	ft_putstr("Bonjour");
	return (0);
}*/
