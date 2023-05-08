#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX stdout
 * @filename: the text file name
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed
 *         or 0 if filename is NULL or if write fails
 *         or if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff_size;
	ssize_t f_desc;
	ssize_t read_bytes;
	ssize_t write_bytes;

	buff_size = malloc(sizeof(char) * letters);
	if (buff_size == 0)
	{
		return (0);
	}
	f_desc = open(filename, O_RDONLY);
	if (f_desc == -1)
	{
		free(buff_size);
		return (0);
	}
	read_bytes = read(f_desc, buff_size, letters);
	if (read_bytes == -1)
	{
		free(buff_size);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff_size, read_bytes);
	free(buff_size);
	close(f_desc);

	return (write_bytes);
}
