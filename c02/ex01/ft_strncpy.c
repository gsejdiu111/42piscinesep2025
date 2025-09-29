/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:04:21 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 16:28:12 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	#include <stdio.h>

	char    src[50] = "World";
	char    dest[50] = "Hello";

        printf("%s\n", dest);
        printf("%s "__builtin_strncpy(dest, src, 2));
        //ft_strncpy(dest, src, 50);
        printf("%s\n", ft_strncpy(dest, src, 2));
        return (0);
}
