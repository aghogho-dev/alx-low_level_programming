#include <stdio.h>

void start_func(void) __attribute__ ((constructor));

/**
 * start_func - startup func
 * Return: void
 */
void start_func(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
