/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:13:12 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/11 18:57:59 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void memcpy_test()
{	
	printf("memcpy start\n");
	int diffs;

	diffs = 0;
	for (int i = 0; i < 10; i++)
	{
		char *r1 = rand_str(5);
		char *r2 = rand_str(5);
		char **array1 = arraycopy(r1,2);
		char **array2 = arraycopy(r2,2);
		free(r1);
		free(r2);
		ft_memcpy(array1[1],array2[1], 3);

		memcpy(array1[0],array2[0], 3);
		if (strcmp(array1[0],array1[1]) != 0 || strcmp(array2[0],array2[1]) != 0)
		{
			diffs++;
			printf("   memcpy str1 %s str2 %s\n",array1[0], array2[0]);
			printf("ft_memcpy str1 %s str2 %s\n",array1[1], array2[1]);
		}
		arraycopyfree(array1,2);
		arraycopyfree(array2,2);
	}

	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}