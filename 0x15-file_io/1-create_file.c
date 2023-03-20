#include "main.h"
/**
  * create_file - function that creates a file.
  * @filename: the name of the file to create
  * @text_content: is a NULL terminated string
  * to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, content;
	ssize_t content_len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		content_len = strlen(text_content);
	content = write(fd, text_content, content_len);
	if (content == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
