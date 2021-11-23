/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:49:31 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 08:32:21 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <fcntl.h>
#include <assert.h>

void putstr_fd_test()
{
	int flags = 0;
	system("rm -f putstr_fd");
	//return;
	flags |= O_RDWR;
	flags |= O_CREAT;
	mode_t mode = S_IRUSR | S_IWUSR;
	int fd = open("putstr_fd",flags, mode);
	ft_putstr_fd("Hello stdout", fd);
	
	
	
	//assert(strcmp(readfile,"Hello stdout") == 0);
	close(fd);

	char readfile[100];
	fd = open("putstr_fd", O_RDWR, mode);
	int filelen = 0;
	int read_ret = 1;/*read(fd, readfile, 1);
	filelen++;*/
	while (read_ret > 0) {
		read_ret = read(fd, readfile + filelen, 1);
		if (read_ret > 0)
			filelen++;
	}
	printf("Filelen is %i, content of file is '%s'\n", filelen, readfile);
	assert(filelen == 12);
	char nonterminated[12] = "Hello stdout";
	assert(memcmp(readfile,nonterminated,12) == 0);
	//printf("read '%s' from file", readfile);

	close(fd);
}