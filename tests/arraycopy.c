/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraycopy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:12:51 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/22 09:48:15 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **arraycopy(char *orig, int size)
{
	int len = strlen(orig);
	char **array = (char **)malloc(sizeof(char *) *size);
	for (int i = 0; i < size; i++)
	{
		array[i] = (char *)malloc(len + 1);
		memcpy(array[i], orig, len + 1);
	}

	return (array);
}


char **arraycopy_mem(char *orig, int size, int memsize)
{
	//int len = strlen(orig);
	char **array = (char **)malloc(sizeof(char *) *size);
	for (int i = 0; i < size; i++)
	{
		array[i] = (char *)malloc(memsize);
		memcpy(array[i], orig, memsize);
	}

	return (array);
}

static void	strdel(char **as) {
	free(*as);
	*as = NULL;
}

void arraycopyfree(char **arr, int size)
{
	int i = 0;
	while (i < size)
	{
		//free(arr[i]);
		strdel(&arr[i]);
		i++;
	}
	free(arr);
}
