/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:19 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 03:47:34 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"

void strlen_test()
{
	int diffs;

	diffs = 0;

	printf("Diffing 1000000 random strings with strlen and ft_strlen\n");
	for (int i = 0; i < 1000000; i++)
	{
		char *r1 = rand_str_term(5);
		int rlen = strlen(r1);
		int len = ft_strlen(r1);
		//ft_memcpy(array1[1],array2[1], 3);
		//memcpy(array1[0],array2[0], 3);
		if (rlen != len)
		{
			diffs++;
			printf("   strlen str1 %s result %i\n",r1, rlen);
			printf("ft_strlen str1 %s result %i\n\n",r1, len);
		}
		free(r1);
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}
