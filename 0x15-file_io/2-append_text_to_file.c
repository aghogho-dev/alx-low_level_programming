#include "main.h"

/**
 * append_text_to_file - func
 * @filename: param
 * @text_content: param
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	
	if (op == -1)
		return (-1);

	if (!text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(op, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
