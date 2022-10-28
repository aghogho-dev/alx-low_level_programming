#include "main.h"

/**
 * flit_bits - func
 * @n: param
 * @m: param
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits, xor;

	bits = 0;
	xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
