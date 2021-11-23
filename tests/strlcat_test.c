/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:46:09 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 06:27:52 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strlcat_test()
{

	/*char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 16;
	char buffer[size];

	strcpy(buffer,first);
	r = strlcat(buffer,last,size);

	printf("returned %i, string = %s\n",r,buffer);
	*/
	#ifdef __APPLE__
	int diffs = 0;
	int n = 0;
	
	//TODO: mem diffing, not strcmp!<---------------
	while (n < 7)
	{
		printf("Diffing strlcat with ft_strlcat with 1000000 random strings, param num = %i\n", n);
		for (int i = 0; i < 1000000; i++)
		{
			char *str = (char *)malloc(10);
			char *str2 = (char *)malloc(n);
			bzero(str,10);
			char *r1 = rand_str_term(5);
			char *r2 = rand_str_term(n);
			strcat(str, r1);
			strcat(str2, r2);
			char **array1 = arraycopy_mem(str, 3, 10);
			char **array2 = arraycopy_mem(str2, 3, n+1);
			free(str);
			free(str2);
			free(r1);
			free(r2);
			int realres = strlcat(array1[0], array2[0], 10);
			int res = ft_strlcat(array1[1], array2[1], 10);

			if (memcmp(array1[0],array1[1], 10) != 0 || realres != res)
			{
				diffs++;
				printf("DIFF!\n strlcat = %s\n ft_strlcat = %s\n", array1[0],array1[1]);
				printf("realres = %i, ft_res = %i\n", realres, res);
				printf("str1 = %s\n str2 = %s\n", array1[2],array2[2]);
				printf("   strlcat in ascii = ");
				printascii(array1[0], 10);
				printf("\nft_strlcat in ascii = ");
				printascii(array1[1], 10);
				printf("\nstr1 in ascii = ");
				printascii(array1[2], 10);
				printf("\nstr2 in ascii = ");
				printascii(array2[2], n+1);
				printf("\n");
			}
			arraycopyfree(array1,3);
			arraycopyfree(array2,3);
		}
		n++;
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("Diffs found, see above^\n");
	}
	#endif
}
