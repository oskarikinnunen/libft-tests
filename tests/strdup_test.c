/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:12:22 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 03:53:59 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void strdup_test()
{
	const char str[] = "helloooo";
	printf("strdup string before call:\n%s\n\n",str);
	char *strcopied = ft_strdup(str);
	printf("strdup result = %s\n", strcopied);
	assert(strcmp(strcopied,"helloooo") == 0);
	free(strcopied);
}
