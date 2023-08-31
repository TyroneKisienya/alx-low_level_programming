#include "main.h"

/**
 * set_bit - declarer
 *
 * @n: val
 *
 * @index: giver
 *
 * Return: success 1 else -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int m = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	m <<= index;
	*n = (*n | m);
	return (1);
}
