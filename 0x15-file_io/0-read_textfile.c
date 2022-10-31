#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - func
 * @filename: param
 * @letters: param
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, file;
	char *ptr;

	if (!filename)
		return (0);

	ptr = malloc(sizeof(char) * letters);

	if (!ptr)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(file, ptr, letters);
	wr = write(STDOUT_FILENO, ptr, rd);

	if (file < 0 || rd < 0 || wr < 0 || rd != wr)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(file);
	return (wr);
}
