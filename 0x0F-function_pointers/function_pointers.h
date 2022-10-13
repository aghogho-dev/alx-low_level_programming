#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

/**
 * size_t - equlas unsigned long int
 */
typedef unsigned long int size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
