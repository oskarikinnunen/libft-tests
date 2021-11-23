/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:21:07 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 08:13:45 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void strsub_test()
{
	char str[] = "This is a SUBSTRING inside a string";
	int start = 10;
	size_t len = 9;
	printf("Trying to find substring with start %i and len %i from string '%s'\n", start, (int)len, str);
	char *substr = ft_strsub(str,start,len);

	printf("Returned: '%s'\n", substr);
	assert(strcmp(substr, "SUBSTRING") == 0);
	free(substr);
}