#include <stdio.h>

/**
 * main - solve me
 * Return: Always 0
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	a[4] = 498;

	for (int i = 0; i < 5; i++)
	{
		printf("*(a + %d) values = %d\n", i, *(a + i));
		printf("*(a + %d) address = %p\n", i, a + i);
	}

	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;

	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, *(a + i));
		printf("a[%d] = %p\n", i, a + i);
	}
	return (0);
}
