#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num args
 * @argv: args vector
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, j, k;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	k = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= c[j])
		{
			k++;
			i -= c[j];
		}
	}
	printf("%d\n", k);
	return (0);
}
