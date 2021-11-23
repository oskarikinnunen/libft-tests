/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:17:23 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/22 08:01:33 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <stdlib.h>
#include <assert.h>


void itoa_test()
{
	int n = 0;
	/*
	while (n < 6)
	{
		//printf("start of itoatest n %i\n", n);
		int i = 44224;
		printf("firstdigits %i of %i is %i\n", n,i,ft_firstdigits(i,n));
		n++;
	}*/
	
	
	int i = -120;

	while (i < 4000)
	{
		char *res = ft_itoa(i);
		//assert(ft_itoa(i) == itoa(i));
		printf("itoa of %i is %s\n", i, res);
		assert(atoi(res) == i);
		free(res);
		i++;
	}
}