/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:05:23 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:32:11 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <fcntl.h>
#include <assert.h>

void putnbr_fd_test()
{
	int flags = 0;
	system("rm -f putnbr_fd");
	flags |= O_RDWR;
	flags |= O_CREAT;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fd = open("putnbr_fd",flags, mode);
	int number = -21002;

	ft_putnbr_fd(number, fd);
	close(fd);
	
	fd = open("putnbr_fd", O_RDWR, mode);
	int charcount = 0;
	char content[6];
	while (read(fd, content + charcount, 1) > 0) {
		charcount++;
	}
	printf("Content of file is '%s'\n", content);
	close(fd);
	assert(atoi("-21002") == atoi(content));
}