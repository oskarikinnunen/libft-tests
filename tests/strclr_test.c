/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:47:13 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:44:16 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>


void putstriter(char *str)
{
	int i = 0;
	while (i < 11)
	{
		printf("char in pos %i is %c\n", i, str[i]);
		i++;
	}
}
void strclr_test()
{
	char *str = ft_strnew(10);
	ft_strcpy(str,"Teststring");
	//printf("BEFORE STRCLR CALL:\n");

	assert(memcmp(str,"Teststring",10) == 0);
	//putstriter(str);

	printf("\n\n");
	//printf("AFTER STRCLR CALL:\n");
	ft_strclr(str);
	assert(memcmp(str,"\0\0\0\0\0\0\0\0\0\0",10) == 0);
	assert(str != NULL);
	//putstriter(str);
	printf("strclr pass!\n");
	free(str);
}