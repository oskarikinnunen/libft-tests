/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:29 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:14:17 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include <ctype.h>
#include <assert.h>

void isalpha_test()
{
	int c = 0;

	while (c < 255)
	{
		if (ft_isprint(c))
			printf("%c isalpha result = %i\n", (unsigned char)c, ft_isalpha(c));
		assert(ft_isalpha(c) == isalpha(c));
		c++;
	}
}