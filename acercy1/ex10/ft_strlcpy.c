/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:19:22 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 11:11:46 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Reproduce the behavior of the function strlcpy (man strlcpy)
 * */

/*
#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>
*/

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*
int	main(void) 
{
	char	str[20] = "Just a string";
	char	dest[20];

        printf("%zu %s \n", strlcpy(dest, str, 20),   dest);
	printf("%i %s \n", ft_strlcpy(dest, str, 20), dest);
	return (0);
}*/
