#include "main.h"

/**
 * create_file - func
 * @filename: param
 * @text_content: param
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i, k = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		for (i = 0; text_content[i]; i++)
		{
			k++;
		}
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
