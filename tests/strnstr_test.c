/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:33:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 06:56:37 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strnstr_test()
{
	int diffs;

	diffs = 0;
	//printf("Diffing 1000000 random string couples with strnstr and ft_strnstr\n");
	int n = 0;
	int ndllen = 0;
	while (ndllen < 5)
	{
		while (n < 5)
		{
			printf("Diffing 1000000 random string couples with strnstr and ft_strnstr, haystack len = 4 param n = %i needle length = %i\n", n, ndllen);
			for (int i = 0; i < 100000; i++)
			{
				char *haystack = rand_str_term(2);
				char *ndl = rand_str(ndllen);
				char **stacks = arraycopy_mem(haystack,2,2 + 1);
				//char **array2 = arraycopy(ndl,2);
				//printf("haystack = %s\n", haystack);
				char *realresult = strnstr(stacks[0],ndl,n);
				char *result = ft_strnstr(stacks[1],ndl,n);

				int rpos = realresult-stacks[0];
				int pos = result-stacks[1];
				//strncpy(stacks[0], array2[0], n);
				//ft_strncpy(stacks[1], array2[1], n);

				//ft_memcpy(stacks[1],array2[1], 3);

				//memcpy(stacks[0],array2[0], 3);
				if (rpos != pos && realresult != NULL)
				{
					diffs++;
					printf("DIFF!\n");
					printf("   strnstr str1 %s str2 %s\npos = %i\n",stacks[0], ndl, rpos);
					printf("ft_strnstr str1 %s str2 %s\npos = %i\n\n",stacks[1], ndl, pos);
				}
				//free(realresult);
				//free(result);
				free(haystack);
				free(ndl);
				arraycopyfree(stacks,2);
				//arraycopyfree(array2,2);
			}
			n++;
		}
		n = 0;
		ndllen++;
	}
	
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}