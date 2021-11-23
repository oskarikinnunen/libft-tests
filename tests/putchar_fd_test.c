/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:39:05 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:33:45 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <fcntl.h>
#include <assert.h>

void putchar_fd_test()
{
	int flags = 0;
	system("rm -f putchar_fd");
	flags |= O_RDWR;
	flags |= O_CREAT;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fd = open("putchar_fd",flags, mode);
	ft_putchar_fd('x', fd);
	close(fd);
	
	fd = open("putchar_fd", O_RDWR, mode);
	char content[1];
	read(fd, content, 1);
	printf("Content of file is '%c'\n", content[0]);
	close(fd);
	assert(content[0] == 'x');
}