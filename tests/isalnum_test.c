/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:41 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:13:18 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include <assert.h>
#include <ctype.h>

void isalnum_test()
{
	int c = 0;

	while (c < 255)
	{
		if (ft_isprint(c))
			printf("%c isalnumresult = %i\n", (unsigned char)c, ft_isalnum(c));
		assert(ft_isalnum(c) == isalnum(c));
		c++;
	}
}