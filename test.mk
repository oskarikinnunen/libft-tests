# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 15:36:10 by okinnune          #+#    #+#              #
#    Updated: 2021/11/23 07:31:36 by okinnune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=testprog
s=srcs/
MAIN= main.c
TEST=a.out
LIB=.
TESTS= tests/arraycopy.c tests/atoi_test.c tests/bzero_test.c tests/isalnum_test.c tests/isalpha_test.c tests/isascii_test.c tests/isdigit_test.c tests/isprint_test.c tests/itoa_test.c tests/lstadd_test.c tests/lstapp_test.c tests/lstdel_test.c tests/lstdelone_test.c tests/lstiter_test.c tests/lstmap_test.c tests/lstnew_test.c tests/memalloc_test.c tests/memccpy_test.c tests/memchr_test.c tests/memcmp_test.c tests/memcpy_test.c tests/memdel_test.c tests/memmove_test.c tests/memset_test.c tests/putchar_fd_test.c tests/putchar_test.c tests/putendl_fd_test.c tests/putendl_test.c tests/putnbr_fd_test.c tests/putnbr_test.c tests/putstr_fd_test.c tests/putstr_test.c tests/rand_str.c tests/strcat_test.c tests/strchr_test.c tests/strclr_test.c tests/strcmp_test.c tests/strcpy_test.c tests/strdel_test.c tests/strdup_test.c tests/strequ_test.c tests/striter_test.c tests/striteri_test.c tests/strjoin_test.c tests/strlcat_test.c tests/strlen_test.c tests/strmap_test.c tests/strmapi_test.c tests/strncat_test.c tests/strncmp_test.c tests/strncpy_test.c tests/strnequ_test.c tests/strnew_test.c tests/strnstr_test.c tests/strrchr_test.c tests/strsplit_test.c tests/strstr_test.c tests/strsub_test.c tests/strtrim_test.c tests/tolower_test.c tests/toupper_test.c 
test:
	gcc ../libft.a $(MAIN) $(TESTS) -I includes -I.. -o $(NAME)
	gcc ../libft.a puts.c $(TESTS) -I includes -I.. -o testputs
#	gcc $(MAIN) $(TESTS) -L. -I includes -I.

testrun:
	gcc ../libft.a $(MAIN) $(TESTS) -I includes -I.. -o $(NAME)
	./testprog

clean:
	rm -f *_fd

tclean:
	rm -f $(TEST)
	rm -f *_fd
