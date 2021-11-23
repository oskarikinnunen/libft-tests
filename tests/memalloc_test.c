/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:15:11 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:33:35 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void memalloc_test()
{
	int size = 10;
	int *arr = malloc(sizeof(int) * size);
	int *arr2 = ft_memalloc(sizeof(int) * size);
	int i = 0;
	while (i < size)
	{
		printf("     malloc mem %i has nmbr %i\n", i, arr[i]);
		printf("ft_memalloc mem %i has nmbr %i\n\n", i, arr2[i]);
		assert(arr2[i] == 0);
		i++;
	}
	free(arr);
	free(arr2);
	
}