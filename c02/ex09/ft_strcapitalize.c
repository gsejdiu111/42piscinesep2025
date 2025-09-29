/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:32:50 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/25 09:40:48 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				if (str[i - 1] < 47 || str[i - 1] > 57 && str[i - 1] < 65)
					str[i] = str[i] - 32;
				else if (str[i - 1] > 90 && str[i - 1] < 97 || str[i - 1] > 122)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
    #include <stdio.h>
        char    str[] = "a3 waaW-W-aaAW 22a-aAS aAFSs";
        
       	printf("%s \n", str);
        ft_strcapitalize(str);
        printf("%s \n", str);
        return (0);
}
