/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:27:57 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 09:14:05 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 10;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
int     main(void)
{       
        #include <stdio.h>
        char    s1[] = "dsfasdasdAADADfs";
        char    s2[] = "";
        char    s3[] = "ASFAFAS";

        printf("%d \n", ft_str_is_uppercase(s1));
        printf("%d \n", ft_str_is_uppercase(s2));
        printf("%d \n", ft_str_is_uppercase(s3));

	return (0);
}*/
