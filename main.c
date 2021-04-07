/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:50:06 by isel-jao          #+#    #+#             */
/*   Updated: 2021/04/01 10:06:19 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>


/*
** macro definition
*/



#define STRCMP(a, b) 	printf("strcmp % 3d\t\tft_strcmp % 3d\n", strcmp(a, b), ft_strcmp(a, b))
#define STRLEN(a)		printf("strlen %lu\t\tft_strlen %lu\n", strlen(a), ft_strlen(a));
#define STRCPY(d, s)	printf("stcpy |%s|\n", strcpy(d, s))
#define FT_STRCPY(d, s)	printf("stcpy |%s|\n", ft_strcpy(d, s))
#define STRDUP(s)		printf("strdup |%s|\t\tft_strdup |%s|\n", strdup(s),  ft_strdup(s))

/*
** Function prototypes
*/

size_t ft_strlen(char const *str);

int ft_strcmp(char const *s1, char const *s2);

char *ft_strcpy(char *dst, char const *src);

ssize_t ft_write(int fd, void const *buf, size_t nbyte);

ssize_t ft_read(int fd, void *buf, size_t nbyte);

char *ft_strdup(char const *s1);

int main(void)
{
	char *s;
	int i;
	int r;
	int w;
	size_t n_byte;
	int fd;
	char buffer[100];

	bzero(buffer, 100);

	printf("main\n");
/*
** 	read form inpus
*/
	// r = ft_read(0, buffer, 10);
	// printf("r = %d\t\tbuf =  |%s|\n",r,  buffer);

/*
**	read Makfile 
*/
		n_byte = 10;
		fd = open("Makefile", O_RDONLY);

		buffer[n_byte] = 0;
		while ((r = ft_read(fd, buffer, 10)) > 0)
		{
			buffer[n_byte] = 0;
			printf("%s", buffer);
		}
		if (r == 0)
			printf("%s", buffer);
/*
**	wrong fd
*/

	// fd = -1;
	// r = ft_read(fd, buffer, 10);
	// printf("r = %d\t\tbuf =  |%s|\n", r, buffer);


/*
** 	write in stdout
*/
	// w = ft_write(1, "hello world\n", 13);
	// printf("w = %d\n", w);

/*
** 	worng fd
*/
	// w = ft_write(-1, "hello world\n", 13);
	// printf("w = %d\n", w);

/*
** 	write in file
*/

	// fd = open("file", O_CREAT|  O_RDONLY |O_WRONLY | O_APPEND, 0644);
	// w = ft_write(fd, "hello world\n", 12);
	// printf("w = %d\n", w);
	// w = ft_write(fd, "hello friend\n", 13);
	// printf("w = %d\n", w);
	// close(fd);
	// return (0);

/*
** 	strlen
*/
	// printf("strlen %lu\n", strlen(NULL));
	// printf("ft_strlen %lu\n",ft_strlen(NULL));
	// STRLEN("");
	// STRLEN("hello world");
/*
** 	strcmp
*/
	// STRCMP("ccc", "ccc");
	// STRCMP("cccc", "ccc");
	// STRCMP("ccc", "cccc");
	// STRCMP("ccc", "acc");
	// STRCMP("acc", "ccc");
	// STRCMP("", "hello");
	// STRCMP("hello", "");
	// STRCMP("", "");

/*
** 	strcpy
*/
	// STRCPY(NULL, "hello");
	// FT_STRCPY(NULL, "hello");

	// STRCPY(buffer, NULL);
	// FT_STRCPY(buffer, NULL);

	// STRCPY(buffer, "hello");
	// STRCPY(buffer, "hi");
	// STRCPY(buffer, "");
	// FT_STRCPY(buffer, "hello");
	// FT_STRCPY(buffer, "hi");
	// FT_STRCPY(buffer, "");

/*
** 	strdup
*/
	// s = strdup(NULL);
	// s = ft_strdup(NULL);

	// STRDUP("");
	// STRDUP("hi");
	// STRDUP("hello world!");

	return (0);
}
