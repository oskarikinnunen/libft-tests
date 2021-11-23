/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:21:33 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/18 08:24:26 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>


/* TODO: this doesn't test all edge cases */
void strtrim_test()
{
	char str[] = " 		  string       with	 whitespaces   	  ";
	//char str[] = "ss ";
	//char str[] = " ssss";
	//char str[] = "s";
	char *trimmed = ft_strtrim(str);
	printf("STR =    '%s'\nTRIMMED = '%s'", str, trimmed);
	assert(strcmp(trimmed, "string       with	 whitespaces") == 0);
	free(trimmed);
}