#include <stdio.h>

/**
 * main - creates an array of chars and prints it
 * Return: Always 0
 */
int main(void)
{
	char a[6];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	a[3] = 'o';
	a[4] = 'o';
	a[5] = 'l';

	printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	printf("%c%c%c%c%c%c\n", *a, *(a + 1), *(a + 2), *(a + 3), *(a + 4), *(a + 5));
	printf("\n\n");
	for (int i = 0; i < 6; i++)
		printf("a[%d] address: %p\n", i, &a[i]);

	return (0);
}
