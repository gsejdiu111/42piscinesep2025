/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsejdiu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:21:54 by gsejdiu           #+#    #+#             */
/*   Updated: 2025/09/27 17:54:17 by gsejdiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * /rush01 "col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left
row2left row3left row4left row1right row2right row3right row4right"
Here is an example of intended input/output for a valid set.
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
4+3+2+1 = 10
1+2+2+2 = 7
4+3+2+1 = 10
1+2+2+2 = 7
10 10 8 6

1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

1+2+3+4 = 10
2+3+4+1 = 10
3+4+1+2 = 10
4+1+2+3 = 10
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	ft_rush(char *str)
{
	int	i;
	int	j;
//	char	res[] = "";
	//char	matrix[4][4];

	int	matrix[4][4] ;//= {{ '1', '1', '1', '4'},{ '1', '1', '1', '4'},{ '1', '1', '1', '4'},{ '1', '1', '1', '4'}};
/*
	write(1, nums[3], 1);
	printf("%s", nums[3]);
*/

	//printf("%s\n", nums[3]);
	i = 0;
	j = 0;

        while(str[i] && i <= 31 )
	{
		printf("tab[0][1] = %d\n", matrix[1][1]);
		if(i < 4)
		{
			matrix[j][i] = str[i];
                        printf("%c", matrix[j][i]);

			i = i + 2;
		}
		else 
		{
			i = 0;
			j++;
		}
	}
		/*	
	while(nums[j][i] )
	{
	        printf("%c", nums[j][i]);

		if ( str[i] >= 1 && str[i] <= 4)
		{
			//res[j+i] = nums[str[i]];
			printf("%s", res);

		}	
		i++;
		j++;
	}
	printf("%s", str);
	write(1, &str[i], 1);*/
	return 0;
}

int	main(void/*int argc, char *argv[]*/)
{
	char	str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

        //char    nums[4] = {'1', '2', '3', "};

	ft_rush[str];
	        //printf("%c", ft_rush[&str]);

	/*
	if (argc < 2)
		return (0);
	*/
	//printf("%d", ft_rush(argv[1]));
	return (0);
}
