/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:26:56 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 07:39:48 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Create a function that displays a 
 * string of characters on the standard output.
 */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int     main(void)
{
        #include <stdio.h>
	ft_putstr("Hello worldas das d asd");   
        return (0);
}*/
