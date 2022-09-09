#include <stdio.h>

/**
 * main - entry point
 * body: print in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
		putchar(ch--);
	putchar('\n');

	return (0);
}
