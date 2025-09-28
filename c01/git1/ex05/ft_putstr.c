/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:24:41 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/21 19:52:30 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Create a function that displays a 
 * string of characters on the standard output
 * */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	char	a;

	a = *str;
	write(1, *str, 11);
}

int	main(void)
{
	char	string[11];

	string = "Hello world";
	ft_putstr(string);
	return (0);
}
