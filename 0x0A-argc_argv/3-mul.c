#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num of args
 * @argv: args vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 1;

	if (argc > 1)
	{
		while (argv[i])
		{
			sum *= atoi(argv[i++]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
