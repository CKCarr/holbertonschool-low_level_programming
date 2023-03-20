#include "main.h"
#define BUFFER_SIZE 1024
/**
  * handle_error - function that handles error messages
  * prints to STDOUT, and exits with specific code for error.
  * @msg: the specific error message given upon fail.
  * @file: given file to correlate with error, upon fail.
  * @exit_code: exit code given for a specific error.
  * Return: 0 for Success
  */
void handle_error(char *msg, char *file, int exit_code)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(exit_code);
}

/**
  * open_file - function to open a new file.
  * @filename: name of file to open.
  * @flags: used when call to open for specific options
  * @mode: sets permissions for file.
  * Return: int value of file descriptor indicating open file.
  */
int open_file(char *filename, int flags, int mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		handle_error("Error: Can't open file %s\n", filename, 98);
	}
	return (fd);
}

/**
  * copy_file - copies from given file to another file.
  * @src_file: given file to copy from.
  * @dest_file: file to copy to.
  * Return: 0 if Success
  */
void copy_file(char *src_file, char *dest_file)
{
	int fd_from, fd_to, fd_RD, fd_WR;
	char buffer[BUFFER_SIZE];

	fd_from = open_file(src_file, O_RDONLY, 0);
	fd_to = open_file(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((fd_RD = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		fd_WR = write(fd_to, buffer, fd_RD);
		if (fd_WR == -1)
		{
			handle_error("Error: Can't write to file %s\n", dest_file, 99);
		}
	}
	if (fd_RD == -1)
	{
		handle_error("Error: Can't read from file %s\n", src_file, 98);
	}
	if (close(fd_from) == -1)
	{
		handle_error("Error: Can't close fd %d\n", (char *) fd_from, 100);
	/*	dprintf("Error: Can't close fd %d\n", fd_from);*/
	/*exit(100);*/
	}
	if (close(fd_to) == -1)
	{
		handle_error("Error: Can't close fd %d\n", (char *) fd_to, 100);
	/*	dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",fd_to);*/
		/* exit(100);*/
	}
}

/**
* main - Write a program that copies the content
*       of a file to another file.
* @argc: # of args passed to function.
* @argv: array of args.
* Return: int values at exit if fail and 0 if Success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
