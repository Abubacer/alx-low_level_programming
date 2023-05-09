#include "main.h"
#define FILE_PERMSS 0664
#define BUFSIZE 1024

/**
 * main - a function that copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_byte, write_byte;
	char bfr[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, ARGS_ERR), exit(97);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		dprintf(STDERR_FILENO, R_ERR, argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMSS);

	if (file_to == -1)
		dprintf(STDERR_FILENO, W_ERR, argv[2]), exit(99);

	while ((read_byte = read(file_from, bfr, BUFSIZE)) > 0)
	{
		write_byte = write(file_to, bfr, read_byte);
		if (write_byte != read_byte)
		{
			dprintf(STDERR_FILENO, W_ERR, argv[2]), exit(99);
		}
	}
	if (read_byte == -1)
		dprintf(STDERR_FILENO, R_ERR, argv[1]), exit(98);

	file_from = close(file_from);
	file_to = close(file_to);

	if (file_from)
		dprintf(STDERR_FILENO, CLOSE_ERR, file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, CLOSE_ERR, file_from), exit(100);

	return (0);
}
