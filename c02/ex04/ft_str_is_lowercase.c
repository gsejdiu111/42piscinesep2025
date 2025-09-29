/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:20:08 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 09:09:24 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 10;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char	s0[] = "2424";
	char    s1[] = "asdad";
        char    s2[] = "ASDASD";

        printf("%d \n", ft_str_is_lowercase(s0));
        printf("%d \n", ft_str_is_lowercase(s1));
	printf("%d \n", ft_str_is_lowercase(s2));
	return (0);
}*/
