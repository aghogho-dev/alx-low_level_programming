#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: num of args
 * @agrv: args vector
 * Return: int
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
