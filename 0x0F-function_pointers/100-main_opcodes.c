#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j;
	int (*s)(int, char**);
	unsigned char m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (!i)
	{
		printf("Error\n");
		exit(2);
	}

	s = main;
	m = *(unsigned char*)s;

	for (j == 0; j < i; i++)
	{
		if (j == i - 1)
		{
			printf("%02x\n", m);
			break;
		}
		printf("%02x ", m++);
	}
	return (0);
}
