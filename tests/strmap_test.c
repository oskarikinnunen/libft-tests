/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:25:12 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:50:19 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

char addone(char c)
{
	return (c + 1);
}

void strmap_test()
{
	char str[] = "abcdE";
	char *str2 = ft_strmap(str, addone);

	printf("printing string '%s' with all characters increased by one.\n", str);
	printf("original str %s \nresult str   %s\n", str,str2);
	assert(strcmp(str2,"bcdeF") == 0);
	free(str2);
}
