#include "main.h"
/**
 *flip_bits - sets the value of a bit to 0 at a given index.
 *@n: origin decimal number.
 *@m: destiny decimal number.
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int p = n ^ m;

	while (p)
	{
		bit += p & 1;
		p >>= 1;
	}
	return (bit);
}
