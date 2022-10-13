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
	char *s;

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

	s = (char *)main;

	for (j == 0; j < i; i++)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", s[i]);
			break;
		}
		printf("%02hhx ", s[i]);
	}
	return (0);
}
