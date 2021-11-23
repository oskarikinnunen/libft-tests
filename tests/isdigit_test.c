/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:17:17 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:15:57 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"
#include <assert.h>
#include <ctype.h>

void isdigit_test()
{
	int c = -255;
	printf("Testing integers in range -255 to 255 with ft_isdigit()\n");
	while (c < 255)
	{
		//printf("nbr is %i\n", c);
		if (ft_isdigit(c) == 1)
		{
			printf("%c is a digit!\n",(char)c);
		}
		assert(isdigit(c) == ft_isdigit(c));
		c++;
	}
}
