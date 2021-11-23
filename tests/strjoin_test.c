/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:20:24 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 08:15:41 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void strjoin_test()
{
	char str1[] = "First string.";
	char str2[] = "Second string.";

	char *joined = ft_strjoin(str1,str2);

	printf ("STR1 = %s\nSTR2 = %s\nJOINED = %s\n", str1, str2, joined);
	assert(strcmp(joined, "First string.Second string.") == 0);

	free(joined);
}