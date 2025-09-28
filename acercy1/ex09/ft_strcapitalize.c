/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:32:50 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/27 17:17:53 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* while is not  null
 * if the character is uppercase make it first lowercase
 * if the character is lowercase
 * if its the first character of the string make it upcs
 * else if previous character is non printable , make it upcs
 * else if character is non printable again make upcs
 * two else ifs because of long line error by norm
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if ((str[i - 1] < 48 || str[i - 1] > 57) && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
int	main(void)
{
    #include <stdio.h>
        //char    str[] = "aa/a aa:a aa@a aa[a aa2a aa{a ss\tA aa:a aa'a";
        char	str[] = "nfdAAAASSASxcxcds";
       	printf("%s \n", str);
        ft_strcapitalize(str);
        printf("%s \n", str);
        return (0);
}
