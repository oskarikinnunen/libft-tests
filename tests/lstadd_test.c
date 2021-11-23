/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:06:00 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 12:26:44 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <assert.h>

void printvaluechar(t_list *elem)
{
	printf("value in char is %c\n", *(char *)elem->content);
}

int listcount(t_list *elem)
{
	int	i = 0;
	while (elem != NULL)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}

void freechar(void *content, size_t content_size) {
	if (content_size > 0)
		free(content);
}

void lstadd_test()
{
	char c = 'a';
	t_list	*first;
	t_list	*next;

	first = ft_lstnew(&c, sizeof(char));
	c++;
	while (c <= 'z')
	{
		next = ft_lstnew(&c, sizeof(char));
		ft_lstadd(&first,next);
		c++;
	}
	ft_lstiter(first,printvaluechar);
	assert(listcount(first) == 26);
	ft_lstdel(&first,freechar);
	assert(first == NULL);
}