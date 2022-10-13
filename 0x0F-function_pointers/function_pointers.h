#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

/**
 * size_t - equals unsigned int
 */
typedef unsigned long size_t;

void array_iterator(int *array, size_t size, void (*action)(int));
#endif
