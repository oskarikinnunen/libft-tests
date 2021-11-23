/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:16:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:11:24 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

void atoi_test()
{
	char *rstring;
	int diffs = 0;
	int len = 0;
	while (len < 10)
	{
		printf("\rDiffing ft_atoi with atoi with 1000000 random strings of length %i\n", len);
		for (int i = 0; i < 1000000; i++)
		{
			rstring = rand_str_term(len);
			int result = ft_atoi(rstring);
			int realresult = atoi(rstring);
			//printf("\r%s",rstring);
			if (realresult != result)
			{
				diffs++;
				printf("\nDIFF! string '%s'\n ft_atoi = %i\n stdatoi = %i\n", rstring, result, realresult);
				printf("str in ascii = ");
				printascii(rstring, len + 1);
				printf("\n");
			}
			free(rstring);
		}
		len++;
	}
	
	if (diffs == 0) {
		printf("\rNo diffs found, great!\n");
	} else {
		printf("\rDiffs found, see above^\n");
	}
}
