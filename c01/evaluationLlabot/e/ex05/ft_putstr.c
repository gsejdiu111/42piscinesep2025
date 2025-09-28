/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:26:56 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 11:20:46 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Create a function that displays a 
 * string of characters on the standard output.
 */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] > 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_putstr(argv[1]);
	return (0);
}
