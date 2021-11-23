/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstapp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:06:00 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/17 03:04:16 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"

void lstapp_test()
{
	char c = 'a';
	t_list	*first;
	t_list	*next;


	first = ft_lstnew(&c, sizeof(char));
	c++;
	while (c <= 'z')
	{
		next = ft_lstnew(&c, sizeof(char));
		ft_lstapp(&first,next);
		c++;
	}

	ft_lstiter(first, printvaluechar);
	
	ft_lstdel(&first, freelst);
}