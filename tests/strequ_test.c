/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:06:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:59:53 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfttests.h"
#include "libft.h"

static void updateloadingbar(int i, float perc, int graphic_index)
{
	char load[] = "\\|/-";
	
	char *color = perc < 50 ? (perc < 25 ? "\x1B[31m" : "\x1B[33m") : (perc < 75 ? "\x1B[36m" : "\x1B[32m");
	printf("%s", color);
	printf("\r%i%% done.",(int)perc);
	printf(" (%c)",load[graphic_index]);
	printf("\x1B[37m"); //Back to white
}

void strequ_test()
{
	int diffs;
	int n;
	int iterations = 10000000;
	int graphic_index;

	diffs = 0;
	n = 0;
	graphic_index = 0;
	while (n < 6)
	{
		printf("\nDiffing %i random strings with strcmp and ft_strcmp, param num = %i\n", iterations, n);
		for (int i = 0; i < iterations; i++)
		{
			char *r1 = rand_str(5);
			char *r2 = rand_str(5);
			/* Update loading bar :D */
			if (i % 4000 == 0)
			{
				float percentage = (float)i / (iterations * 0.01);
				graphic_index = graphic_index == 3 ? 0 : graphic_index + 1;
				updateloadingbar(i,percentage, graphic_index);
			}	
			/* Back to our regularly scheduled programming */
			int equ = ft_strequ(r1,r2);
			int strcmpclamped = (strcmp(r1,r2) == 0);
			if (equ != strcmpclamped)
			{
				diffs++;
				printf("DIFF!");
				printf("\n   strcmp str1 %s str2 %s cmp %i \n",r1, r2, strcmpclamped);
				printf("ft_strcmp str1 %s str2 %s cmp %i \n",r1, r2, equ);
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
