/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:34:03 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 10:58:45 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 10;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			return (0);
		else
			a = 1;
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
	char    s1[] = "\a\b\t\n\v\f\r\01\x05\x0a\x15\0";
	char	s2[] = "asd\tasd";
	char	s3[] = "";


	printf("%d \n", ft_str_is_printable(s1));
        printf("%d \n", ft_str_is_printable(s2));
        printf("%d \n", ft_str_is_printable(s3));
        return (0);
}*/
