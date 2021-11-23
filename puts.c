/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 07:26:40 by okinnune          #+#    #+#             */
/*   Updated: 2021/11/23 11:14:25 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libfttests.h"
#include <fcntl.h>
#include <assert.h>

/* Program that reads stdin, designed to test put_**** functions of libft */

void testputs(char *filename);

int main (int argc, char *argv[])
{
	if (argc == 2) 
	{
		if (strcmp(argv[1], "putnbr") == 0)
			testputs("files/putnbr_file");
		if (strcmp(argv[1], "putchar") == 0)
			testputs("files/putchar_file");
		if (strcmp(argv[1], "putstr") == 0)
			testputs("files/putstr_file");
	}
}

void testputs(char *filename)
{
	char buf_stdin[1];
	char buf_file[1];
	int fd = open(filename, O_RDONLY);
	while (read(fd, buf_file, 1) == 1)
	{
		read(0, buf_stdin, 1);
		write(1, &buf_file[0], 1);
		assert(*buf_stdin == *buf_file);
	}
	close(fd);
	printf("testputs %s passed! \n", filename);
}