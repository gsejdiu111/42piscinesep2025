/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:04:21 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/27 17:13:55 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function copies the source string up to the integer n
 * if the n has 2 characters and destination 5,
 * first 2 letters will be changed in the destination and others remain the same
 *
 */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	n;
	while (i < n+1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char    src[] = "Wor";
	char	sco[] = "Wor";
	char    dest[] = "Hello";
	char	deso[] = "Hello";

        printf("%s\n", ft_strncpy(dest, src, 50000));
        return (0);
}
