#include "main.h"

/**
 * clear_bit - sets any to 0
 *
 * @n: val
 *
 * @index: giver
 *
 * Return: success 1 else -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int m = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	m = ~(i << index);
	*n = (*n & m);
	return (1);
}
