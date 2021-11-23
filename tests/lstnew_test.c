/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:56:38 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 12:23:08 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <assert.h>

void freelst(void *c, size_t s)
{
	if (s > 0)
		free(c);
}

//TODO: assert!

void lstnew_test()
{
	t_list	*list;
	t_list	*list2;
	unsigned long x = 1800000000;
	char xc = '\0';
	//char x = '\0';
	
	list = ft_lstnew(&x, sizeof(unsigned long));
	printf("lst  content = %lu\n", *((unsigned long*)list->content));

	list2 = ft_lstnew(&xc, sizeof(char));
	list->next = list2;
	
	if (list2->content == NULL)
		printf("lst2 content is null!\n");
	else
		printf("lst2 content = %c\n", *((char *)list2->content));
	
	ft_lstdelone(&list,freelst);
	assert(list == NULL && list2 != NULL);
	ft_lstdelone(&list2,freelst);
	assert(list2 == NULL);
}
