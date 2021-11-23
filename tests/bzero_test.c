/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:10:47 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:34:24 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void bzero_test()
{
	int origlen;
	char str[] = "hellooo";
	printf("bzero string before call %s\n",str);
	origlen = ft_strlen(str);
	ft_bzero(str,3);

	int i = 0;
	while (i < origlen)
	{
		printf("%c\n",str[i]);
		i++;
	}
	//puts(str);
	assert(strcmp(str,"\0\0\0ellooo") == 0);
}
