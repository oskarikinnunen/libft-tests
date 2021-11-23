/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:52:06 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/17 01:24:54 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"

void printvalueint(t_list *elem)
{
	printf("value in int is %i\n", *(int *)elem->content);
}

void lstiter_test()
{
	lstadd_test();
	/*
	t_list	*lists[10];
	int i = 0;
	while (i < 10)
	{
		lists[i] = ft_lstnew(&i,sizeof(int));
		//printf("list value %i\n", *((int *)(lists[i])->content));
		if (i > 0)
			lists[i - 1]->next = lists[i];
		i++;
	}
	ft_lstiter(lists[i-1],printvalueint);
	*/
	
}