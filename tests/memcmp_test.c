/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:42 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 03:42:39 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void memcmp_test()
{
	int diffs;

	diffs = 0;

	printf("Diffing 1000000 random strings with memcmp and ft_memcmp\n");
	for (int i = 0; i < 1000000; i++)
	{
		char *r1 = rand_str_term(5);
		char *r2 = rand_str_term(5);
		char **array1 = arraycopy(r1,2);
		char **array2 = arraycopy(r2,2);
		free(r1);
		free(r2);
		int realcmp = memcmp(array1[0], array2[0],2);
		int cmp = ft_memcmp(array1[1], array2[1],2);
		//ft_memcpy(array1[1],array2[1], 3);
		//memcpy(array1[0],array2[0], 3);
		if (realcmp != cmp)
		{
			diffs++;
			printf("   memcmp str1 %s str2 %s comparison result %i\n",array1[0], array2[0], realcmp);
			printf("ft_memcmp str1 %s str2 %s comparison result %i\n\n",array1[1], array2[1], cmp);
		}
		else
		{
			/*printf("NODIFF!\n");
			printf("   memcmp str1 %s str2 %s comparison result %i\n",array1[0], array2[0], realcmp);
			printf("ft_memcmp str1 %s str2 %s comparison result %i\n",array1[1], array2[1], cmp);*/
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