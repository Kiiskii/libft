#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <bsd/string.h>
#include <limits.h>

int	testsprintf(void)
{
	// Char tests

	printf("\n\n\033[0;32mTEST CHARACTER VALUES\033[0m\n\n");

	int len1 = 0;
	int	len2 = 0;
	len1 = ft_printf("MY printf char: %c\n", 't');
	len2 = printf("SY printf char: %c\n", 't');
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf char: %c\n", 't' + 250);
	len2 = printf("SY printf char: %c\n", 't' + 250);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf char: %c\n", 45678);
	len2 = printf("SY printf char: %c\n", 45678);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf char: %c\n", 456787);
	len2 = printf("SY printf char: %c\n", 456787);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf char: %c\n", 140);
	len2 = printf("SY printf char: %c\n", 140);
	assert(len1 == len2);
	ft_printf("\n");
	
	// String tests

	printf("\n\n\033[0;32mTEST STRING VALUES\033[0m\n\n");

	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf string: %s\n", "Anton");
	len2 = printf("SY printf string: %s\n", "Anton");
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf string: %%\n");
	len2 = printf("SY printf string: %%\n");
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf string: %s\n", (char *)NULL);
	len2 = printf("SY printf string: %s\n", (char *)NULL);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf string: %s\n", "");
	len2 = printf("SY printf string: %s\n", "");
	assert(len1 == len2);

	// INT tests

	printf("\n\n\033[0;32mTEST INT VALUES\033[0m\n\n");

	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf INT: %d\n", 34569);
	len2 = printf("SY printf INT: %d\n", 34569);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf INT: %d\n", INT_MAX);
	len2 = printf("SY printf INT: %d\n", INT_MAX);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf INT: %d\n", INT_MIN);
	len2 = printf("SY printf INT: %d\n", INT_MIN);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf INT: %d\n", 0);
	len2 = printf("SY printf INT: %d\n", 0);
	assert(len1 == len2);

	// Unsigned ints
	
	printf("\n\n\033[0;32mTEST UNSIGNED INT VALUES\033[0m\n\n");

	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Unsigned INT: %u\n", INT_MIN);
	len2 = printf("SY printf Unsigned INT: %u\n", INT_MIN);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Unsigned INT: %u\n", 0);
	len2 = printf("SY printf Unsigned INT: %u\n", 0);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Unsigned INT: %u\n", INT_MAX);
	len2 = printf("SY printf Unsigned INT: %u\n", INT_MAX);
	assert(len1 == len2);
	
	// Hexadecimal tests

	printf("\n\n\033[0;32mTEST HEXADECIMAL VALUES\033[0m\n\n");
	
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Hexadecimal: %X\n", 1580);
	len2 = printf("SY printf Hexadeciaml: %X\n", 1580);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Hexadecimal: %x\n", 1234567);
	len2 = printf("SY printf Hexadeciaml: %x\n", 1234567);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Hexadecimal: %X\n", 0);
	len2 = printf("SY printf Hexadeciaml: %X\n", 0);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf Hexadecimal: %X\n", -1);
	len2 = printf("SY printf Hexadeciaml: %X\n", -1);
	assert(len1 == len2);

	// Void pointer tests
	
	printf("\n\n\033[0;32mTEST VOID POINTER VALUES\033[0m\n\n");
	
	len1 = 0;
	len2 = 0;
	char *p1 = "Hello";
	len1 = ft_printf("MY printf void pointer: %p\n", p1);
	len2 = printf("SY printf void pointer: %p\n", p1);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	int p2 = 234567;
	int *adp2 = &p2;
	len1 = ft_printf("MY printf void pointer: %p\n", adp2);
	len2 = printf("SY printf void pointer: %p\n", adp2);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	char *p3 = "Hello world this is Mars";
	len1 = ft_printf("MY printf void pointer: %p\n", p3);
	len2 = printf("SY printf void pointer: %p\n", p3);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf void pointer: %p\n", (void *)-1);
	len2 = printf("SY printf void pointer: %p\n", (void *)-1);
	assert(len1 == len2);
	ft_printf("\n");
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf void pointer: %p\n", NULL);
	len2 = printf("SY printf void pointer: %p\n", NULL);
	assert(len1 == len2);
	
	// Mix tests

	printf("\n\n\033[0;32mTEST MIXED VALUES\033[0m\n\n");
	
	len1 = 0;
	len2 = 0;
	len1 = ft_printf("MY printf: %s%d %%%u%%%X %x%p %i %s\n", (char *)NULL, INT_MAX, 987654, 456789, 912345, NULL, INT_MIN, "END");
	len2 = printf("SY printf: %s%d %%%u%%%X %x%p %i %s\n", (char *)NULL, INT_MAX, 987654, 456789, 912345, NULL, INT_MIN, "END");
	assert(len1 == len2);
	ft_printf("\n");

	printf("\n\033[0;32mALL PRINTF RETURN VALUES MATCH!\033[0m\n");

	return (0);
}


