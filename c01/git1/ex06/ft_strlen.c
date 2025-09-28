/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 19:55:20 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/21 20:11:56 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Create a function that counts and
 * returns the number of characters in a string.
 * */
#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{

        write(1, str, 1);
}

int	main(void)
{
	char	string;
	
	string = "Bonjour";
	        write(1, "string", sizeof(string));

	ft_strlen(&string);
        write(1, string, strlen(string));
	return (0);
}
