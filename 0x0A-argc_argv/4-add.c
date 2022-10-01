#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: arg num
 * @argv: arg vec
 * Return: int
 */

int main(int argc, char **argv)
{
	int i = 1;
	int a = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (argv[i])
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				if (!strcmp(argv[i], "0"))
				{
					sum += 0;
				}
				else
				{
					a = 1;
				}
			}
			i++;
		}
		if (a == 1)
		{
			printf("Error\n");
			return (a);
		}
		printf("%d\n", sum);
		return (a);
	}
}
