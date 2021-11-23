/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:11 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 10:39:40 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *rand_str(int length)
{
	char *str = malloc(length + 1);

	int i = 0;
	while (i < length)
	{
		unsigned char c = rand() % (126 + 1 - 32) + 32;
		if (i > 0)
		{
			if (ft_isdigit(str[i-1]) == 1) //RNG manipulation for atoi testing. If previous char was a digit, generate the new one to be digit aswell
			{
				c = rand() % (57 + 1 - 48) + 48;
			}
		}
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	
	return (str);
}

/* Includes all ascii characters (random null terminators etc. randomly in string), unlike rand_str */
char *rand_str_term(int length)
{
	char *str = malloc(length + 1);

	int i = 0;
	while (i < length)
	{
		unsigned char c = rand() % (255 + 1 - 0) + 0;
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	//printf("rand str i = %i\n", i);
	return (str);
}
