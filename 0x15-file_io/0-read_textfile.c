#include "main.h"

/**
 * read_textfile - func that reads txt file, prints it to the
 * POSIX STDOUT.
 * @filename: ptr file name
 * @letters: Numb, characters to be read
 *
 * Return: NULL (0)
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wrt);
}
