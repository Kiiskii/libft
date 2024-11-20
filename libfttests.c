#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <bsd/string.h>
#include <limits.h>

int	testsprintf(void);

#if MYASSERT
void assert(bool condition)
{
	if (condition == false) {
		print_error();
		abort();
	}
}
#endif

int	main(void)
{
	// ft_isalnum

	assert(ft_isalnum(9) == 0);
	assert(ft_isalnum(45) == isalnum(45));

	// ft_isascii

	assert(ft_isascii(121) == 1);
	assert(ft_isascii(145) == isascii(145));

	// ft_isalpha

	assert(ft_isalpha(95) == 0);
	assert(ft_isalpha(145) == isalpha(145));

	// ft_isdigit

	assert(ft_isdigit(58) == 0);
	assert(ft_isdigit(8) == isdigit(8));

	// ft_isprint

	assert(ft_isprint(120) == 1);
	assert(ft_isprint(31) == isprint(31));

	// ft_tolower

	assert(ft_tolower(87) == tolower(87));
	assert(ft_tolower(102) == tolower(102));

	// ft_toupper

	assert(ft_toupper(102) == toupper(102));
	assert(ft_toupper(87) == toupper(87));

	// ft_strlen

	assert(ft_strlen("Hello") == strlen("Hello"));

	// ft_strlcat

	char dest[20] = "rrrrrr";
	char test[20] = "rrrrrr";
	

	//assert(ft_strlcat(dest, "123", 0) == strlcat(test, "123", 0));
	//assert(ft_strlcat(dest, "123", 20) == strlcat(test, "123", 20));
	assert(ft_strlcat(dest, "lorem", 15) == strlcat(test, "lorem", 15));

	// ft_strlcpy

	char dest2[20] = "Moimoi";
	char test2[20] = "Moimoi";

	assert(ft_strlcpy(dest2, "1234", 20) == strlcpy(test2, "1234", 20));
	assert(ft_strlcpy(dest2, "1234", 2) == strlcpy(test2, "1234", 2));
	assert(ft_strlcpy(dest2, "1234", 0) == strlcpy(test2, "1234", 0));

	// ft_strchr

	//assert(ft_strchr("asdfgh", 's') == strchr("asdfgh", 's'));
	assert(ft_strchr("Hello", 'l') == strchr("Hello", 'l'));

	// ft_strrchr

	assert(ft_strrchr("asdfasdf", 'd') == strrchr("asdfasdf", 'd'));
	assert(ft_strrchr("asdfasdf", '\0') == strrchr("asdfasdf", '\0'));
	assert(ft_strrchr("asdfasdf", 300) == strrchr("asdfasdf", 300));

	// ft_strncmp

	assert(ft_strncmp("asdfg", "asdfg", 6) == strncmp("asdfg", "asdfg", 6));
	assert(ft_strncmp("asdfg", "aspoika", 6) < 0 && strncmp("asdfg", "aspoika", 6) < 0);
	//assert(ft_strncmp("test", "testss", 7) < 0 && strncmp("test", "testss", 7) < 0);

	// ft_strnstr

	assert(ft_strnstr("There is", "There isx", 20) == strnstr("There is", "There isx", 20));
	assert(ft_strnstr("There is sommething", "There is", 3) == strnstr("There is sommething", "There is", 3));
	assert(ft_strnstr("haystack", "ac", 8) == strnstr("haystack", "ac", 8));
	assert(ft_strnstr("", "", 8) == strnstr("", "", 8));
	//ft_strnstr(NULL, NULL, 0);
	//strnstr(NULL, NULL, 10);

	// ft_strdup

	char *ftstrdup;
	char *teststrdup;
	ftstrdup = ft_strdup("oki");
	teststrdup = strdup("oki");
	assert(ft_memcmp(ftstrdup, teststrdup, 4) == 0);
	//assert(ft_strdup("") == strdup(""));
	free(ftstrdup);
	free(teststrdup);

	// ft_substr

	char *ftsubstr;
	char *ftsubstr2;
	ftsubstr = ft_substr("asdfghjkl", 2, 4);
	ftsubstr2 = ft_substr("asdfghjkl", 20, 5);
	assert(ft_strncmp(ftsubstr, "dfgh", 10) == 0);
	assert(ft_strncmp(ftsubstr2, "", 10) == 0);
	free(ftsubstr);
	free(ftsubstr2);

	// ft_strjoin

	char *ftstrjoin;
	ftstrjoin = ft_strjoin("asdf", "");
	assert(ft_strncmp(ftstrjoin, "asdf", 20) == 0);
	free(ftstrjoin);

	// ft_strtrim

	char *ftstrtrim;
	ftstrtrim = ft_strtrim("12hello12", "12");
	assert(ft_strncmp(ftstrtrim, "hello", 30) == 0);
	free(ftstrtrim);

	// ft_split

	char *testsplit[] = {"hello ", "world ", "!", NULL};
	char **ftsplit;
	ftsplit = ft_split("hello 1world 111!1", '1');
	size_t i = 0;
	for (; testsplit[i] != NULL; i++)
	{
		assert(strcmp(testsplit[i], ftsplit[i]) == 0);
		free(ftsplit[i]);
	}
	assert(ftsplit[i] == NULL);
	free(ftsplit);
	/*
	char **ftsplit2;
	ftsplit2 = ft_split("              ", ' ');
	assert(ftsplit2 == NULL);
	free(ftsplit2);
	*/
	
	// ft_atoi

	assert(ft_atoi("    -1232kl45") == atoi("    -1232kl45"));
	assert(ft_atoi("    ++1232kl45") == atoi("    ++1232kl45"));
	assert(ft_atoi("1232kl45") == atoi("1232kl45"));
	assert(ft_atoi("5443934943934923hello") == atoi("5443934943934923hello"));
	assert(ft_atoi("777777777777777") == atoi("777777777777777"));
	assert(ft_atoi("2147483649") == atoi("2147483649"));
	assert(ft_atoi("-2147483649") == atoi("-2147483649"));
	assert(ft_atoi("-214748364999") == atoi("-214748364999"));
	//printf("%d\n", ft_atoi("188888888888888488888888888888888"));
	//assert(ft_atoi("188888888888888488888888888888888") == atoi("188888888888888488888888888888888"));
	//assert(ft_atoi("-188888888888888888888888888888888") == atoi("-188888888888888888888888888888888"));
	
	// ft_itoa

	//assert(strcmp(ft_itoa(147852369), "147852369") == 0);
	//assert(strcmp(ft_itoa(-147852369), "-147852369") == 0);
	char *testitoa;
	testitoa = ft_itoa(INT_MIN);
	assert(strcmp(testitoa, "-2147483648") == 0);
	free(testitoa);
	char *testitoa2;
	testitoa2 = ft_itoa(INT_MAX);
	assert(strcmp(testitoa2, "2147483647") == 0);
	free(testitoa2);
	char *testitoa3;
	testitoa3 = ft_itoa(0);
	assert(strcmp(testitoa3, "0") == 0);
	free(testitoa3);

	// memory related functions

	char ftmemset[20] = "ASDFG";
	char ftmemset1[20] = "ASDFG";
	char ftmemset2[20] = "ASDFG";
	char ftmemset3[20] = "ASDFG";
	char testmemset[20] = "ASDFG";
	char testmemset1[20] = "ASDFG";
	char testmemset2[20] = "ASDHU";
	char testmemset3[20] = "ASDHU";
	assert(memcmp(ft_memset(ftmemset, 'A', 4), memset(testmemset, 'A', 4), 10) == 0);
	assert(ft_memcmp(ft_memset(ftmemset1, 'A', 4), memset(testmemset1, 'A', 4), 10) == 0);
	assert(memcmp(ft_memset(ftmemset2, 'A', 4), memset(testmemset2, 'A', 4), 10) < 0);
	assert(ft_memcmp(ft_memset(ftmemset3, 'A', 4), memset(testmemset3, 'A', 4), 10) < 0);

	char ftbzero[20] = "ASDFG";
	char testbzero[20] = "AADFH";
	ft_bzero(ftbzero, 2);
	bzero(testbzero, 2);
	assert(ft_memcmp(ftbzero, testbzero, 0) == 0);
	
	assert(ft_memchr("asdfasdf", 'd', 5) == memchr("asdfasdf", 'd', 5));
	assert(ft_memchr("asdfasdf", '\0', 5) == memchr("asdfasdf", '\0', 5));
	assert(ft_memchr("asdfasdf", 'z', 5) == memchr("asdfasdf", 'z', 5));

	char ftmemmove[30] = "ASDFGHJKLMN";
	char testmemmove[30] = "ASDFGHJKLMN";
	//ft_memmove((ftmemmove + 3), ftmemmove, 5);
	//memmove((testmemmove + 3), testmemmove, 5);
	memmove(testmemmove + 1, testmemmove, 8);
	ft_memmove(ftmemmove + 1, ftmemmove, 8);
	assert(ft_memcmp(ftmemmove, memmove, 10));

	char *ftcalloc;
	ftcalloc = ft_calloc(5, 5);
	assert(ftcalloc != NULL);
	free(ftcalloc);
	
	// bonus
	t_list *testlist;
	void *listhelper = "42";
	testlist = ft_lstnew(listhelper);
	assert(ft_memcmp(testlist->content, listhelper, 2) == 0);
	assert(testlist->next == NULL);
	free(testlist);

	printf("\n\033[0;32mALL LIBFT TESTS PASSED!\033[0m\n");

	testsprintf();

	return (0);
}


