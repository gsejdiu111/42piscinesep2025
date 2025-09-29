/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:51:40 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 09:30:12 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int     main(void)
{       
        #include <stdio.h>
        char    str[] = "a3ffsasda 32432 23 42sdfdsf sd a";

	printf("%s \n", str);
	ft_strupcase(str);
	printf("%s \n", str);
	return (0);
}*/
