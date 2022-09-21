#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: int
 */

int main(void)
{
	int i;
	char ar[14];

	for (i = 0; i < 13; i++)
	{
		ar[i] = (33 + rand() % 90);
	}
	ar[13] = '\0';
	printf("%s\n", ar);
	return (0);
}
