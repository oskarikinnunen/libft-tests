/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:02 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:23:00 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>


void isprint_test()
{
	int c = 0;

	while (c < 255)
	{
		if (ft_isprint(c))
			printf("%c ft_isprint returned true\n", (unsigned char)c);

		assert(isprint(c) == ft_isprint(c));
		c++;
	}
}