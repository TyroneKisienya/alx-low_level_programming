#include "main.h"

/**
 * flip_bits = flipper
 *
 * @n: val
 *
 * @m: num
 *
 * Return: 0 success else
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, l = 0;

	flip = n ^ m;
	while(flip > 0)
	{
		l += flip & 1;
		flip >>= 1;
	}
	return (l);
}
