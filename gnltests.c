//#include "get_next_line.h"
//#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int	testsgnl(void)
{
	char	*teststr;
	int		fd;

	printf("\n");
	printf("\n\n\033[0;32mTEST GNL\033[0m\n\n");
	//fd = open("./gnl/gnltext/1char.txt", O_RDONLY);
	//fd = open("./gnltext/bible.txt", O_RDONLY);
	fd = open("./gnl/gnltext/giant_line_nl.txt", O_RDONLY);
	while (1)
	{
		teststr = get_next_line(fd);
		printf ("%s\n",teststr);
		if (teststr == NULL)
			break ;
		free(teststr);
	}
	close(fd);
	return 0;
}
/*
int testsgnl(void)
{
	char	*teststr;
    int fd1 = open("./gnltext/lines_around_10.txt", O_RDONLY);
	int fd2 = open("./gnltext/giant_line_nl.txt", O_RDONLY);
	int fd3 = open("./gnltext/bible.txt", O_RDONLY);
	int fd4 = open("a.out", O_RDONLY);

	while (1)
	{
		teststr = get_next_line(fd);
		printf ("%s\n",teststr);
		if (teststr == NULL)
			break ;
		free(teststr);
	}
	while (1)
	{
		teststr = get_next_line(fd2);
		printf ("%s\n",teststr);
		if (teststr == NULL)
			break ;
		free(teststr);
	}
	while (1)
	{
		teststr = get_next_line(fd3);
		printf ("%s\n",teststr);
		if (teststr == NULL)
			break ;
		free(teststr);
	}
	while (1)
	{
		teststr = get_next_line(fd4);
		printf ("%s\n",teststr);
		if (teststr == NULL)
			break ;
		free(teststr);
	}

	close(fd1);
    close(fd2);
    //close(fd3);
    close(fd4);
   
    return (0);
}
*/
