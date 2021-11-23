/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:16:28 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 14:20:25 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include <assert.h>

void memchr_test()
{
	char *rstring;
	int diffs = 0;
	printf("Diffing ft_memchr with memchr with 1000 random strings\n");
	for (int i = 0; i < 1000; i++)
	{
		rstring = rand_str_term(5);
		char *ptr = (char *)ft_memchr((void *)rstring, 'p', 5);
		char *realptr = (char *)memchr(rstring, 'p', 5);
		if (ptr-rstring != realptr-rstring)
		{
			/*if (realptr != NULL)
			{*/
				diffs++;
				printf("DIFF! string '%s'\n ptr = %ld\n realptr = %ld\n", rstring, ptr-rstring+1, realptr-rstring+1);
			//}
		} else
		{
			//printf("NODIFF! string '%s'\n ptr = %ld\n realptr = %ld\n", rstring, ptr-rstring+1, realptr-rstring+1);
		}
		free(rstring);
	}
	
	/* Testing if ft_memchr ignores terminating character, as it should */
	char *str = "Hello\0\0c\0";
    char *cposreal =  (char *)memchr(str, 'c', 20);
	char *cpos =  (char *)ft_memchr(str, 'c', 20);
    
    printf("REAL:  location of 'c' in str %s is %i\n", str, (int)(cposreal - str));
	printf("LIBFT: location of 'c' in str %s is %i\n", str, (int)(cpos - str));
	assert(cpos == cposreal);
	
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}
