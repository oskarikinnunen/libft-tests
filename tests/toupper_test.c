/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:35:42 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:24:59 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>

void toupper_test()
{
	int c = 0;

	while (c < 255)
	{
		if (ft_isprint(c))
			printf("%c toupper result = %c\n", (unsigned char)c, ft_toupper(c));
		assert(toupper(c) == ft_toupper(c));
		c++;
	}
}