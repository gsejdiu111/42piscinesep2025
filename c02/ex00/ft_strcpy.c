/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:49:50 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 08:09:04 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Reproduce the behavior of the function strcpy (man strcpy).
 * */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


int	main(void)
{
	#include <stdio.h>

	char	src[20] = "Hello world";
	char	dest[20];
	
        printf("%s\n", dest);
	//__builtin_strcpy(dest, src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
