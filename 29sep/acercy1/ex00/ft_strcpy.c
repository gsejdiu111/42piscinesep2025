/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:49:50 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 18:08:49 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Reproduce the behavior of the function strcpy (man strcpy).
 * */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		dest[i] = '\0';
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	#include <stdio.h>
	//#include <bsd/string.h>

	char	src[] = "Hello world";
	char	src2[] = "Hello world";
	char	dest[2];
	char	odest[2];

//	printf("orig %s\n", strcpy(odest, src));
        printf("orig %s\n", __builtin_strcpy(odest, src2));
	printf("func %s\n", ft_strcpy(dest, src));
	return (0);
}*/
