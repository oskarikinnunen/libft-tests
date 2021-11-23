/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:56 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:33:38 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void memset_test()
{
	char str[] = "helloooo";
	printf("memset string before call: %s\n\n",str);
	ft_memset(str,'x',3);
	printf("memset string after call: ");
	puts(str);

	if (strcmp(str, "xxxloooo") == 0)
		printf("No diff!\n");
	else
		printf("DIFF! memset_test failed comp\n");
}
