#include <stdio.h>

/**
 * main = prints the value of a string
 * Return: 0;
 */
int main(void)
{
	char a[7] = "School";

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[9]);
	printf("Value of a address: %p\n", a);
	printf("Value of a[0] address: %p\n", &a[0]);
	printf("Value of \"School\": %p\n", "School");
	return (0);
}
