/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:40:19 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:32:07 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <fcntl.h>
#include <assert.h>

void putendl_fd_test()
{
	int flags = 0;
	system("rm -f putendl_fd");
	//return;
	flags |= O_RDWR;
	flags |= O_CREAT;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fd = open("putendl_fd",flags, mode);
	ft_putendl_fd("Hello stdout", fd);
	close(fd);

	char readfile[100];
	fd = open("putendl_fd", O_RDWR, mode);
	int filelen = 0;
	int read_ret = 1;/*read(fd, readfile, 1);
	filelen++;*/
	while (read_ret > 0) {
		read_ret = read(fd, readfile + filelen, 1);
		if (read_ret > 0)
			filelen++;
	}
	printf("Filelen is %i, content of file is '%s'\n", filelen, readfile);
	assert(filelen == 13);
	char nonterminated[13] = "Hello stdout\n"; //Has no null terminator
	assert(memcmp(readfile,nonterminated,13) == 0);
	//printf("read '%s' from file", readfile);

	close(fd);
}