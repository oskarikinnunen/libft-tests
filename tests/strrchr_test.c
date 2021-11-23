/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:33:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 06:33:36 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strrchr_test()
{
	char *rstring;
	int diffs = 0;
	printf("Diffing ft_strRchr with strRchr with 100000xx random strings\n");
	for (int i = 0; i < 100000; i++)
	{
		rstring = rand_str_term(5);
		char *ptr = ft_strrchr(rstring, 'p');
		char *realptr = strrchr(rstring, 'p');
		
		if (ptr-rstring != realptr-rstring)
		{
			diffs++;
			printf("DIFF! string '%s'\n ptr = %ld\n realptr = %ld\n", rstring, ptr-rstring, realptr-rstring);
		}
		free(rstring);
	}
	if (diffs == 0) {
		printf("No diffs found, great!\n");
	} else {
		printf("%i Diffs found, see above^\n", diffs);
	}
}
