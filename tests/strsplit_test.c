/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:20:46 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 08:43:18 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <assert.h>

void strsplit_test()
{
	char arr[100] = "*Hello*world***these*are**delimited******strings*";
	char correct[6][10] = { "Hello", "world", "these", "are", "delimited", "strings"};
	printf("split test start\n");
	char **res = ft_strsplit(arr, '*');
	int i = 0;
	//printf("\n0th str in res is %s\n\n", res[0]);
	while (res[i] != 0)
	{
		printf("string %i is %s\n",i, res[i]);
		assert(strcmp(res[i],correct[i]) == 0);
		i++;
	}
	i = 0;
	while (res[i] != 0)
	{
		free(res[i]);
		i++;
	}
	free(res);
}