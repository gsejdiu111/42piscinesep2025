/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:26:14 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 11:00:44 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
     #include <stdio.h>
        char    str[] = "a3Aasd ad adasSFAFSs";

        printf("%s \n", str);
        ft_strlowcase(str);
	printf("%s \n", str);
        return (0);
}*/
