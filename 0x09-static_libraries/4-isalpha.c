#include "main.h"

/**
 * _isalpha - checks for alphabets, lower or upper
 * @c: the param being checked
 * Return: 1 if successful otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
