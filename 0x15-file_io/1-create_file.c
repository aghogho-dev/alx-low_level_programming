#include "main.h"

/**
 * create_file - func
 * @filename: param
 * @text_content: param
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int i, file, cls;

	i = 0;
	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (!text_content)
	{
		while (text_content[i])
			i++;
		write(file, text_content, i);
	}
	cls = close(file);
	if (cls == -1)
		return (-1);
	return (1);
}
