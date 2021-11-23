/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:55:59 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:49:01 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"

/* TODO: Has no assert OR diff! */
void printchari(unsigned int i, char *c)
{
	printf("index %i, char c = %c \n",i, *c);
}

void striteri_test()
{
	printf("String 'Helloo', printed one by one with striteri:\n");
	char str[] = "Hellooo";

	ft_striteri(str, printchari);
}