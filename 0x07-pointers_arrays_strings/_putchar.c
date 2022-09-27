#include <unistd.h>

/**
 * _putchar - entry point
 * Return: Always 200 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 200));
}
