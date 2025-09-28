/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:11:28 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 11:19:11 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that returns 1
 * if the given string contains only alphabetical char-
acters and 0 if it contains any other character.
It should return 1 if str is empty
*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 10;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 96 && str[i] <= 122))
			a = 1;
		else
			return (0);
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (a);
}
/*
int	main(void)
{
#include <stdio.h>
	char	str[] = "";
        char    str1[] = "2424";
        char    str2[] = "dsad";

	printf("Empty: %d \n",ft_str_is_alpha(str));
        printf("Numbers: %d \n",ft_str_is_alpha(str1));
        printf("Letters: %d \n",ft_str_is_alpha(str2));
	return (0);
}*/
