/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:03:30 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/26 13:53:11 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strncmp compares s1 and s2 up to max chars of n
 * if s1 < s2 returns negative value
 * if s2 > s1 returns positive value
 * returns 0 if s == s2
 * 
 * Implementation:
 * if n = 0  return 0 because there is nothing to compare
 * if index less than n and current char of s1 and s2 are same
 * and s1 is not null continue to the next char
 * if first char is not equal to second char return the diff
 * otherwise return null.
 */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n  && (s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
	{
		printf("%d %d %s %s\n", s1[i], s2[i], s1, s2);
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
#include <unistd.h>
#include <string.h>
#include <stdio.h>

	char	dest[20] ;
	char	src[20] = "224 aarld";

	printf("%d \n", strncmp(dest, src, 2));
        printf("%d", ft_strncmp(dest, src, 2));

	return (0);	
}
