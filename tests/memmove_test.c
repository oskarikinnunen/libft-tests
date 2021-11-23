/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:59:45 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 03:24:33 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void memmove_test()
{
	char str[100] = "TESTINGGisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	
	//memcpy(first + 8, first, 10);
	//printf("memcpy overlap : %s\n ", str);
	//memmove(second + 8, first, 10);
	//printf("   memmove overlap : %s\n ", str);

	ft_memmove(str + 8, str, 10);
	assert(strcmp(str,"TESTINGGTESTINGGis") == 0);
	printf("ft_memmove overlap : %s\n", str);
	strcpy(str,"TESTINGGisfun");
	printf("Original string :%s\n", str);
	memmove(str + 8, str, 10);
	printf("   memmove overlap : %s\n", str);
	
	
}