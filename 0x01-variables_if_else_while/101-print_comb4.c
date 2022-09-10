#include <stdio.h>

/**
 * main - entry point
 * body - nested for loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first <= 7; first++)
		for (second = 1; second <= 8; second++)
			for (third = 2; third <= 9; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if ((first == 7) && (second == 8) && (third == 9))
				{
					putchar('\n');
				}
				else 
				{
					putchar(',');
					putchar(' ');
				}
			}
	return (0);
}
