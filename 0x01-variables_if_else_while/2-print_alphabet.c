#include <stdio.h>

/**
 * main - entry point
 * body: use putchar to print with for-loop
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char ch;
	char stp;

	stp = 'z' + 1;
	for (ch = 'a'; ch != stp; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
