#include "main.h"

/**
 * create_file - a function  that creates a file
 * if text_content is NULL the fuction create an empty file
 * if the file already exists, the fuction truncate it
 * @filename: the text file name to create
 * @text_content: a pointer to a character string to be written
 *
 * Return: 1 on success or -1 on failure
 *         or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int f_desc;
	ssize_t write_bytes;

	write_bytes = 0;

	if (filename == 0)
		return (-1);

	f_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_desc == -1 || write_bytes == -1)
	{
		return (-1);
	}

	if (text_content != 0)
	write_bytes = write(f_desc, text_content, strlen(text_content));

	close(f_desc);

	return (1);
}
