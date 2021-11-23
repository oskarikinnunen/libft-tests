/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:48:55 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:40:02 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void strnew_test()
{
	size_t strsize = 10;
	char *str = ft_strnew(strsize);
	assert(memcmp(str,"\0\0\0\0\0\0\0\0\0\0", 10) == 0);
	ft_strcpy(str,"hellooo");
	assert(memcmp(str,"hellooo\0\0\0", 10) == 0);
	printf("strsize is %zu", strsize);
	free (str);
}