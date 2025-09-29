/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:36:02 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/24 14:59:15 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
	{
		s1++;
		s2++;
	}

	if(*s1 == *s2)
		return 0;
	else
		return *s1 - *s2;

}
int	main(void)
{
#include <stdio.h>
#include <string.h>
	char	s1[] = "apples";
	char	s2[] = "apple";

	printf("strcmp(\"apples\", \"apple\") = %d\n", strcmp("apples", "apple") );
        printf("%s %s %i orig \n", s1, s2, strcmp(s1, s2));
	printf("%s %s %i func \n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}
