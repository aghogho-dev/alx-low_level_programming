#include <stdio.h>

/**
 * main - entry point
 * body: print a-zA-Z with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small;
	char large;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);

	for (large = 'A'; large <= 'Z'; large++)
		putchar(large);

	putchar('\n');

	return (0);
}
