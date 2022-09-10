#include <stdio.h>

/**
 * main - entry point
 * body - print number comma delimited
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num++ + '0');

		if (num <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
