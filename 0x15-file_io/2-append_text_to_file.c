#include "main.h"

/**
 * append_text_to_file - appends txt at the end of, file
 * @filename: ptr to name of file
 * @text_content: string pointer to be appended
 * Return: (-1) if filename  NULL,
 * ( -1) access violations,( 1) for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
