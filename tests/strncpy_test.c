/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:09:25 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 10:52:14 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include "time.h"

void printinascii(char *str, int len)
{
	for (int ii = 0; ii < 5; ii++)
	{
		printf("%i ",(int)((unsigned char)(str[ii])));
	}
}

void strncpy_test()
{
	int diffs;
	int n;

	diffs = 0;
	n = 0;

	while (n < 6)
	{
		printf("Diffing 1000000 random strings with strncpy and ft_strncpy, param num = %i\n",n);
		for (int i = 0; i < 1000000; i++)
		{
			char *r1 = rand_str_term(5);
			char *r2 = rand_str_term(5);
			char **array1 = arraycopy_mem(r1,2,5);
			char **array2 = arraycopy_mem(r2,2,5);
			free(r1);
			free(r2);
			
			strncpy(array1[0], array2[0], n);
			ft_strncpy(array1[1], array2[1], n);
			//ft_memcpy(array1[1],array2[1], 3);

			//memcpy(array1[0],array2[0], 3);
			if (memcmp(array1[0],array1[1],5) != 0 || memcmp(array2[0],array2[1],5) != 0)
			{
				diffs++;
				printf("\nDIFF!\n");
				printf("n is %i\n\n",n);
				printf("   strncpy str1 %s str2 %s\n",array1[0], array2[0]);
				printf("  DST IN ASCII:\n");
				printinascii(array1[0], 5);
				printf("\n  SRC IN ASCII:\n");
				printinascii(array2[0], 5);
				printf("\nFT:\nft_strncpy str1 %s str2 %s\n",array1[1], array2[1]);
				printf("FTDST IN ASCII:\n");
				printinascii(array1[1], 5);
				printf("\nFTSRC IN ASCII:\n");
				printinascii(array2[1], 5);
				printf("\nEND DIFF!\n");
			}
			arraycopyfree(array1,2);
			arraycopyfree(array2,2);
		}
		n++;
	}
	

	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}