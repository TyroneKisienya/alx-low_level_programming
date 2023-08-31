#include "main.h"

/**
 * get_bit - ret val at point
 *
 * @n: val
 *
 * @index: giver
 *
 * Return: success 0 else 1, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int m;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	m = ((n >> index) & 1);
	return (m);
}
