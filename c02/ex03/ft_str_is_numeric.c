/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:06:33 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 09:06:35 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Create a function that returns 1 
 * if the given string contains only digits and 0 if it
contains any other character.
*/
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 10;
	while (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			a = 1;
		else
			return (0);
		i++;
	}
	if (a != 10)
		return (a);
	else
		return (0);
}
/*
int	main(void)
{
	#include <stdio.h>

	char	s0[] = "";
        char    s1[] = "aadas sasa";
        char    s2[] = "2324";

        printf("Empty %d \n", ft_str_is_numeric(s0));
        printf("Letters %d \n", ft_str_is_numeric(s1));
	printf("Nums %d \n", ft_str_is_numeric(s2));
	return 0;
}*/
