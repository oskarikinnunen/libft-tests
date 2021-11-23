/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:09:52 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 04:29:29 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strcpy_test()
{
	int diffs;

	diffs = 0;

	printf("Diffing 1000000 random strings with strcpy and ft_strcpy\n");
	for (int i = 0; i < 1000000; i++)
	{
		char *r1 = rand_str_term(5);
		char *r2 = rand_str_term(5);
		char **array1 = arraycopy(r1,2);
		char **array2 = arraycopy(r2,2);
		free(r1);
		free(r2);
		
		strcpy(array1[0], array2[0]);
		ft_strcpy(array1[1], array2[1]);
		/*if (i % 50 == 0)
			printf("\r%s", array1[0]);*/
		
		//ft_memcpy(array1[1],array2[1], 3);
		//memcpy(array1[0],array2[0], 3);
		if (memcmp(array1[0],array1[1], 5) != 0 || memcmp(array2[0],array2[1], 5) != 0)
		{
			diffs++;
			printf("\nDIFF!");
			printf("\n   strcpy str1 %s str2 %s\n",array1[0], array2[0]);
			printf("STR IN ASCII:\n");
			for (int ii = 0; ii < 5; ii++) {
				printf("%i ",(int)(array1[0][ii]));
			}
			printf("\nft_strcpy str1 %s str2 %s\n",array1[1], array2[1]);
		}
		arraycopyfree(array1,2);
		arraycopyfree(array2,2);
	}
	if (diffs == 0) {
		printf("\rNo diffs found, great!\n");
	} else {
		printf("\r%i Diffs found, see above^\n", diffs);
	}
}