/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:49:24 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 12:45:57 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void printascii(char *str, int len)
{
	for (int ii = 0; ii < len; ii++)
	{
		printf("%i ",(int)((unsigned char)str[ii]));
	}
}

void strncat_test()
{
	int diffs = 0;
	int n = 0;
	char *str;
	//printf("Diffing strncat with ft_strncat with 1000000 random strings\n");
	while (n < 5)
	{
		printf("Diffing strncat with ft_strncat with 1000000 random strings, param num = %i\n", n);
		for (int i = 0; i < 1000000; i++)
		{
			str = (char *)malloc(10);
			bzero(str, 10);
			char *r = rand_str_term(5);
			strcat(str, r);
			free(r);
			char **array1 = arraycopy_mem(str, 3, 10);
			char **array2 = arraycopy_mem(str, 3, 10);
			
			strncat(array1[0], array2[0], n);
			ft_strncat(array1[1], array2[1], n);
			
			if (memcmp(array1[0],array1[1],10) != 0)
			{
				diffs++;
				printf("DIFF!\n strncat = %s\n ft_strncat = %s\n", array1[0],array1[1]);
				printf("str1 = %s\n str2 = %s\n", array1[2],array2[2]);
				printf("\n   rstring in ASCII: ");
				printascii(array1[2],5);
				printf("\n   strncat in ASCII: ");
				printascii(array1[0],10);
				printf("\nft_strncat in ASCII: ");
				printascii(array1[1],10);
				printf("\n");
			}
			free(str);
			arraycopyfree(array1,3);
			arraycopyfree(array2,3);
		}
		n++;
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}