/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:33:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 06:43:37 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strstr_test()
{
	int diffs;

	diffs = 0;
	int r1len = 5;
	int r2len = 0;
	
	while (r2len < 10)
	{
		printf("Diffing 1000000 random string couples with strstr and ft_strstr, needle length %i\n", r2len);
		for (int i = 0; i < 1000000; i++)
		{
			char *r1 = rand_str_term(r1len);
			char *r2 = rand_str_term(r2len);
			char **haystacks = arraycopy_mem(r1,2,r1len + 1);
			char **needles = arraycopy_mem(r2,2, r2len + 1);
			
			char *realresult = strstr(haystacks[0],needles[0]);
			char *result = ft_strstr(haystacks[1],needles[1]);

			int rpos = realresult-haystacks[0];
			int pos = result-haystacks[1];
			//strncpy(haystacks[0], needles[0], n);
			//ft_strncpy(haystacks[1], needles[1], n);

			//ft_memcpy(haystacks[1],needles[1], 3);

			//memcpy(haystacks[0],needles[0], 3);
			if (rpos != pos && realresult != NULL)
			{
				diffs++;
				printf("DIFF!\n");
				printf("   strstr str1 %s str2 %s\npos = %i\n",haystacks[0], needles[0], rpos);
				printf("ft_strstr str1 %s str2 %s\npos = %i\n\n",haystacks[1], needles[1], pos);
			}
			//free(realresult);
			//free(result);
			free(r1);
			free(r2);
			arraycopyfree(haystacks,2);
			arraycopyfree(needles,2);
		}
		r2len++;
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}