/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:48:19 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 07:48:11 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../includes/libfttests.h"


/* TODO: Has no assert OR diff! */
void printchar(char *c)
{
	printf("char c = %c \n",*c);
}

void striter_test()
{
	printf("String 'Helloo', printed one by one with striter:\n");
	char str[] = "Hellooo";

	ft_striter(str, printchar);
}