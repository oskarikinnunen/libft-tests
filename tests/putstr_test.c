/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:34:36 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 11:17:08 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include "time.h"


void putstr_test()
{
	srand(42); //Sets the seed for rand
	int i = 0;
	while (i < 200)
	{
		char *rstring = rand_str(5);
		ft_putstr(rstring);
		free(rstring);
		i++;
	}
	int seed = time(0);
	srand(seed);
	printf("SEED 2 (after putstr) = %i\n", seed);
}