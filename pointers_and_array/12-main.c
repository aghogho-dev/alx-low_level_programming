#include <stdio.h>

void f(int *a);

/**
 * main - Illustrating the array type decay
 * Return: Always 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t;
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);
	return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @a: address of an integer we need to print
 * Return: void
 */
void f(int *a)
{
	printf("a: %p\n", a);
	printf("&a: %p\n", &a);
	return;
}
