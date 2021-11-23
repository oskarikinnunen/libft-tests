/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:33:59 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:51:11 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

char addindex(unsigned int i,char c)
{
	return (c + i);
}

void strmapi_test()
{
	char str[] = "abcdE";
	char *str2 = ft_strmapi(str, addindex);
	printf("printing string '%s' with all characters increased by the index of the char.\n", str);
	printf("original str: %s \nresult string:%s\n", str,str2);
	assert(strcmp(str2,"acegI") == 0);
	free(str2);
}
