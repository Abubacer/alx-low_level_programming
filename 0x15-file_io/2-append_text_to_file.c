#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * If text_content is NULL, the function will not add anything to the file
 * @filename: the text file name to append
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and if the file exists
 *         or -1 on failure and if the file does not exist
 *         or lacks write permissions
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc;
	ssize_t write_bytes;

	write_bytes = 0;

	if (filename == 0)
		return (0);

	f_desc = open(filename, O_WRONLY | O_APPEND);

	if (f_desc == -1 || write_bytes == -1)
	{
		return (-1);
	}

	if (text_content != 0)
	write_bytes = write(f_desc, text_content, strlen(text_content));

	close(f_desc);

	return (1);
}
