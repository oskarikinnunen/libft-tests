/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:34:21 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:07:56 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"

void putnbr_test() {
	int i = -1001;
	char nl = '\n';
	while (i <= 1001)
	{
		ft_putnbr(i);
		write(1, &nl, 1);
		i++;
	}
}