/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:33 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 10:50:10 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"

static void updateloadingbar(int i, float perc, int graphic_index)
{
	char load[] = "\\|/-";
	
	char *color = perc < 50 ? (perc < 25 ? "\x1B[31m" : "\x1B[33m") : (perc < 75 ? "\x1B[36m" : "\x1B[32m");
	printf("%s", color);
	printf("\r%i%% done.",(int)perc + 1);
	printf(" (%c)",load[graphic_index]);
	printf("\x1B[37m"); //Back to white
}

void strncmp_test()
{
	int diffs;
	int n;
	int iterations = 10000000;
	int graphic_index;

	diffs = 0;
	n = 0;
	graphic_index = 0;
	while (n < 10)
	{
		printf("\nDiffing %i random strings with strncmp and ft_strncmp, param num = %i\n", iterations, n);
		for (int i = 0; i < iterations; i++)
		{
			char *r1 = rand_str_term(5);
			char *r2 = rand_str_term(5);
			/* Update loading bar :D */
			if (i % 4000 == 0)
			{
				float percentage = (float)i / (iterations * 0.01);
				graphic_index = graphic_index == 3 ? 0 : graphic_index + 1;
				updateloadingbar(i,percentage, graphic_index);
			}	
			/* Back to our regularly scheduled programming */
			if (strncmp(r1, r2, n) != ft_strncmp(r1, r2, n))
			{
				diffs++;
				printf("DIFF!\n");
				printf("PARAM N = %i\n", n);
				printf("\n   strcmp str1 %s str2 %s cmp %i \n",r1, r2, 	strncmp(r1, r2, n));
				
				printf("ft_strcmp str1 %s str2 %s cmp %i \n",r1, r2, ft_strncmp(r1, r2, n));
				printf("STR1 IN ASCII: ");
				printascii(r1, 5);
				printf("\n");
				printf("STR2 IN ASCII: ");
				printascii(r2, 5);
				printf("\n");
			}
			free(r1);
			free(r2);
		}
		n++;
	}
	if (diffs == 0) {
		printf("\nNo diffs found, great!\n");
	} else {
		printf("\n%i Diffs found, see above^\n", diffs);
	}
}
