#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("Size of type 'char' on my computer: %lu btyes\n", sizeof(char));
	printf("Size of the type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type of variable n on my computer: %lu bytes\n", sizeof(n));

	return (0);
}
