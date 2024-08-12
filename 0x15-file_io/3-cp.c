#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks correct number
 * @argc: arguments
 *
 * Return: void
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks if file exists
 * @check: checks if true or false
 * @file: file_from name
 * @fd_from: file_from
 * @fd_to: file_to
 *
 * Return:void
 *
 */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}


/**
 * check99 - checks if file is written or creatted
 * @check: checks if true or false
 * @fd_from: file_from
 * @fd_to: file_to
 * @file: file_to name
 *
 * Return: void
 */

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - checks if files were closed
 * @check: checks for true and false
 * @fd: file descriptor
 *
 * Return: void
 *
 */

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of file
 * @argc: number of arguments\@argv: array of pointers
 * @argv: array of pointers
 *
 * Return: 0 when done
 *
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lr, lw;
	char buf[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lr = 1024;

	while (lr == 1024)
	{
		lr = read(fd_from, buf, 1024);
		check98(lr, argv[1], fd_from, fd_to);
		lw = write(fd_to, buf, lr);
		if (lw != lr)
			lw = -1;
		check99(lw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}

