/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:10:54 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 12:19:55 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <assert.h>

void del_int(void *ptr, size_t s)
{
	if (s > 0)
		free(ptr);
}

void lstdelone_test()
{
	//system("leaks testprog");
	t_list	*list;
	t_list	*list2;
	int value = 10;
	//int value2 = 3;
	char value2 = '\0';
	list = ft_lstnew(&value, sizeof(int));
	list2 = ft_lstnew(&value2, sizeof(char));
	list->next = list2;
	printf("list value %i\n", *((int *)list->content));
	if (list->next->content != NULL)
		printf("list1 nexts value %i\n", *((char *)list->next->content));
	ft_lstdelone(&list, del_int);
	assert(list2 != NULL); //Check that the ft_lstdelone didn't point it's ->next to NULL
	ft_lstdelone(&list2, del_int);
	assert(list == NULL);

	//system("leaks testprog");
}