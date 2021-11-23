/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:35:20 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:24:02 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>


void tolower_test()
{
	int c = 0;

	while (c < 255)
	{
		if (ft_isprint(c))
			printf("%c tolower result = %c\n", (unsigned char)c, ft_tolower(c));
		assert(tolower(c) == ft_tolower(c));
		c++;
	}
}