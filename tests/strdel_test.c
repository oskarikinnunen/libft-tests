/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdel_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:47:37 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:36:01 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

//TODO: make strnew works in all tests regardless of the implementation. (Maybe just use a static strnew in tests other than strnew test?)

void strdel_test()
{
	char *str;
	
	str = ft_strnew(12);
	strcpy(str,"Teststring");

	printf("Teststring is '%s'\n",str);
	ft_strdel(&str);
	assert(str == NULL);
}