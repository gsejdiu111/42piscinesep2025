/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:38:57 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/24 16:23:05 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior 
 * of the function strcat
 * */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
#include <unistd.h>
#include <string.h>
#include <stdio.h>

	char	src[255] = "World\n";
	char	dest[255] = "Hello ";
	char	destorig[255] = "Hello ";

	printf("%s", strcat(destorig, src));
	printf("%s", ft_strcat(dest, src));
	return (0);
}
