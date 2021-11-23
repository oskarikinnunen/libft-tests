#ifndef LIBFTTESTS_H
# define LIBFTTESTS_H
# include <string.h>
# include <stdlib.h>
# include "libft.h"
# include <stdio.h> //Remove, for debugging only
# include <limits.h>
# define FCOUNT 59
# define STRNEW 0
char *rand_str(int length);
char *rand_str_term(int length);
char **arraycopy(char *orig, int size);
char **arraycopy_mem(char *orig, int size, int memsize);
void arraycopyfree(char **arr, int size);
void printvaluechar(t_list *elem);
void printascii(char *str, int len);
void freelst(void *c, size_t s);
void printvalueint(t_list *elem);
void atoi_test();
void bzero_test();
void isalnum_test();
void isalpha_test();
void isascii_test();
void isdigit_test();
void isprint_test();
void itoa_test();
void lstadd_test();
void lstapp_test();
void lstdel_test();
void lstdelone_test();
void lstiter_test();
void lstmap_test();
void lstnew_test();
void memalloc_test();
void memccpy_test();
void memchr_test();
void memcmp_test();
void memcpy_test();
void memdel_test();
void memmove_test();
void memset_test();
void putchar_test();
void putendl_test();
void putnbr_test();
void putstr_test();
void strcat_test();
void strchr_test();
void strclr_test();
void strcmp_test();
void strcpy_test();
void strdel_test();
void strdup_test();
void strequ_test();
void striter_test();
void striteri_test();
void strjoin_test();
void strlcat_test();
void strlen_test();
void strmap_test();
void strmapi_test();
void strncat_test();
void strncmp_test();
void strncpy_test();
void strnequ_test();
void strnew_test();
void strnstr_test();
void strrchr_test();
void strsplit_test();
void strstr_test();
void strsub_test();
void strtrim_test();
void tolower_test();
void toupper_test();
void putstr_fd_test();
void putchar_fd_test();
void putendl_fd_test();
void putnbr_fd_test();
#endif
