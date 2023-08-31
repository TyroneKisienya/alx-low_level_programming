#include "main.h"

/**
 * binary_to_uint - converter
 *
 * @b: var
 *
 * Return: num
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == 49)
			num = (num << 1) | 1;
		else
			return (0);
		b++;
	}
	return (num);
}
