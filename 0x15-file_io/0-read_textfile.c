#include "main.h"
/**
  * read_textfile - function that reads a text file
  *      and prints it to the POSIX standard output.
  * @filename: is the given file to read and print.
  * @letters:is the number of letters to read and print
  * Return: the # letters function reads and prints.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t let_rd, let_wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	let_rd = read(fd, buffer, letters);
	if (let_rd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	let_wr = write(STDOUT_FILENO, buffer, let_rd);
	if (let_wr == -1 || let_wr != let_rd)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (let_wr);
}
