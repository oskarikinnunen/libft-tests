/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:33:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 06:31:26 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void strchr_test()
{
	char *rstring;
	int diffs = 0;
	printf("Diffing ft_strchr with strchr with 1000000 random strings\n");
	for (int i = 0; i < 1000000; i++)
	{
		rstring = rand_str_term(5); //No need for _term but why not ¯\_(ツ)_/¯
		char *ptr = ft_strchr(rstring, 'p');
		char *realptr = strchr(rstring, 'p');
		
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