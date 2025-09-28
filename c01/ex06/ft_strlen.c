/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:50:10 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/23 08:55:24 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that counts and returns 
 * the number of characters in a string.*/

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
/*
int	main(void)
{
	printf("%d", ft_strlen("Bonjour world"));
	return (0);
}*/
