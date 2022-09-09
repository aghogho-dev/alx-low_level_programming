#include <stdio.h>

/**
 * main - entry point
 * body: print 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
		printf("%d", num++);

	printf("\n");

	return (0);
}
