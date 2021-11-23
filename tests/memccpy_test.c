/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:15:23 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 14:17:02 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

//TODO: Remember to check/test return!
/*
 "If the character
  c (as converted to an unsigned char) occurs in the string src, the copy stops and a
  pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n
  bytes are copied, and a NULL pointer is returned."
  
  ^man memccpy
*/

void memccpy_test()
{
	int diffs;

	diffs = 0;
	int cpylength = 0;
	
	while (cpylength < 6)
	{
		printf("Diffing ft_memccpy with memccpy with 1000000 random strings, copylength %i\n", cpylength);
		for (int i = 0; i < 1000000; i++)
		{
			char *r1 = rand_str_term(5);
			char *r2 = rand_str_term(5);
			char **dsts = arraycopy_mem(r1, 4, 5);
			char **srcs = arraycopy_mem(r2, 4, 5);
			free(r1);
			free(r2);
			ft_memccpy(dsts[0],srcs[0], 'p',cpylength);

			memccpy(dsts[1],srcs[1], 'p', cpylength);
			if (memcmp(dsts[0],dsts[1], 5) != 0 || memcmp(srcs[0],srcs[1], 5) != 0)
			{
				diffs++;
				printf("DIFF!\ncpylength %i\n", cpylength);
				printf("   memcpy str1 %s str2 %s\n",dsts[0], srcs[0]);
				printf("ft_memcpy str1 %s str2 %s\n\n",dsts[1], srcs[1]);
				
				printf("ASCII   :\nDST:");
				printascii(dsts[1], 5);
				printf("\nSRC:");
				printascii(srcs[1], 5);
				printf("\nASCII FT:\nDST:");
				printascii(dsts[0], 5);
				printf("\nSRC:");
				printascii(srcs[0], 5);
				printf("\nENDDIFF!\n");
			}
			arraycopyfree(dsts,4);
			arraycopyfree(srcs,4);
		}
		cpylength++;
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}