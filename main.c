#include "libft.h"
#include "libfttests.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[])
{
	void (*func_ptrs[FCOUNT])() = {atoi_test,bzero_test,isalnum_test,isalpha_test,isascii_test,isdigit_test,isprint_test,itoa_test,lstadd_test,lstapp_test,lstdel_test,lstdelone_test,lstiter_test,lstmap_test,lstnew_test,memalloc_test,memccpy_test,memchr_test,memcmp_test,memcpy_test,memdel_test,memmove_test,memset_test,putchar_test,putchar_fd_test,putendl_test,putendl_fd_test,putnbr_test,putnbr_fd_test,putstr_test,putstr_fd_test,strcat_test,strchr_test,strclr_test,strcmp_test,strcpy_test,strdel_test,strdup_test,strequ_test,striter_test,striteri_test,strjoin_test,strlcat_test,strlen_test,strmap_test,strmapi_test,strncat_test,strncmp_test,strncpy_test,strnequ_test,strnew_test,strnstr_test,strrchr_test,strsplit_test,strstr_test,strsub_test,strtrim_test,tolower_test,toupper_test};
	char *func_names[FCOUNT] = {"atoi_test","bzero_test","isalnum_test","isalpha_test","isascii_test","isdigit_test","isprint_test","itoa_test","lstadd_test","lstapp_test","lstdel_test","lstdelone_test","lstiter_test","lstmap_test","lstnew_test","memalloc_test","memccpy_test","memchr_test","memcmp_test","memcpy_test","memdel_test","memmove_test","memset_test","putchar_test","putchar_fd_test","putendl_test","putendl_fd_test","putnbr_test","putnbr_fd_test","putstr_test","putstr_fd_test","strcat_test","strchr_test","strclr_test","strcmp_test","strcpy_test","strdel_test","strdup_test","strequ_test","striter_test","striteri_test","strjoin_test","strlcat_test","strlen_test","strmap_test","strmapi_test","strncat_test","strncmp_test","strncpy_test","strnequ_test","strnew_test","strnstr_test","strrchr_test","strsplit_test","strstr_test","strsub_test","strtrim_test","tolower_test","toupper_test"};
	
	int seed = time(0);
	srand(seed);
	printf("SEED = %i\n", seed);
	//return (0);
	if (argc >= 2)
	{
		printf("Program ran with argument %s\n", argv[1]);
		printf("-------------------------------------\n");
		int i = 0;
		while (i < FCOUNT)
		{
			if (ft_strcmp(argv[1],func_names[i]) == 0 || ft_strcmp(argv[1],func_names[i]) == -95)
			{
				printf("Found function %s!\n", func_names[i]);
				func_ptrs[i]();
				if (argc == 3)
				{
					if (strcmp(argv[2],"noleaks") == 0)
						printf("\nNo 'leaks' call.\n");
					else
						system("leaks testprog");
				} else
					system("leaks testprog");
			}
			i++;
		}
	}
	else
	{
		printf("running whole suite of tests!\n");
		for (int i = 0; i < FCOUNT; i++)
		{
			printf("running test nbr %i, name %s\n", i, func_names[i]);
			func_ptrs[i]();
			printf("\n");
			system("leaks testprog");
		}
		//system("leaks testprog");
	}
	return (0);
}

