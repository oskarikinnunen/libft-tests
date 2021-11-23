/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:06:00 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 12:24:02 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <assert.h>


t_list *addonemap(t_list *elem)
{
	t_list	*new;
	//printf("elem content size is %zu \n", elem->content_size);
	new = ft_lstnew(elem->content,elem->content_size);
	*((int *)new->content) += 1;
	return(new);
}

void freechar2(void *val, size_t sz)
{
	free(val);
}

void lstmap_test()
{
	char c = 'a';
	t_list	*first;
	t_list	*next;
	t_list	*mapped;

	first = ft_lstnew(&c, sizeof(char));
	c++;
	while (c <= 'z')
	{
		next = ft_lstnew(&c, sizeof(char));
		ft_lstadd(&first,next);
		c++;
	}

	mapped = ft_lstmap(first, addonemap);

	
	//ft_lstiter(first,printvaluechar);
	//ft_lstiter(mapped,printvaluechar);

	ft_lstdel(&first,freechar2);
	ft_lstdel(&mapped,freechar2);
	//ft_lstdel(&mapped,freechar2);
}