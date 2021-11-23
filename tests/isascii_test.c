/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:20 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:15:21 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include <assert.h>
#include <ctype.h>

void isascii_test()
{
	int c = 0;

	while (c < 255)
	{
		printf("char: %c int: %i isascii result = %i\n", (unsigned char)c, c, ft_isascii(c));
		assert(ft_isascii(c) == isascii(c));
		c++;
	}
}