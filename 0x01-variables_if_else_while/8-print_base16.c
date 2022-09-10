#include <stdio.h>

/**
 * main - entry point
 * body - print hex numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 15)
		printf("%x", num++);
	printf("\n");

	return (0);
}
