/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:49:24 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 04:47:18 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

void strcat_test()
{
	char src[50] = "Hello!!";

	//ft_strcpy(src, "Hello!!");
	ft_strcat(src, " this is catted!");
	ft_strcat(src, ", and so is this.");

	//strcat(src, " this is catted!");
	//strcat(src, ", and so is this.")
	printf("string result = %s\n", src);
	assert(strcmp(src, "Hello!! this is catted!, and so is this.") == 0);
}