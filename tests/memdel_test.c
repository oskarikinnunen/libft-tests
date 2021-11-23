/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memdel_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:29:05 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:33:26 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void memdel_test()
{
	//char str[] = "Hello world!";
	char *str = malloc(10);
	char *str2 = malloc(10);
	strcpy(str, "HELLO!!");
	strcpy(str2,"HELLO!!");

	ft_memdel((void **) &str);
	free(str2);
	assert(str == NULL);
	printf("string  is %s\n", str);
	printf("string2 is %s\n", str2);
}