#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: num args
 * @argv: args vector
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;

	if (argc)
	{
		for (i = 0; argv[i]; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
