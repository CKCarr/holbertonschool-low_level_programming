#include "main.h"
#define BUFFER_SIZE 1024
/**
* main - Write a program that copies the content
*       of a file to another file.
* @argc: # of args passed to function.
* @argv: array of args.
* Return: int values at exit if fail and 0 if Success
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_RD, fd_WR;
	char *buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can's write to %s\n", argv[2]);
		exit(99);
	}
	while ((fd_RD = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		fd_WR = write(fd_to, buffer, fd_RD);
		if (fd_WR != fd_RD)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fd_RD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
