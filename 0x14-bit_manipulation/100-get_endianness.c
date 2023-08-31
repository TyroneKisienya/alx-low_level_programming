#include "main.h"

/**
 * get_endianness - check for endianness
 *
 * Return: 0 big else 1 little
 */
int get_endianness(void)
{
	int m = 1;
	char *seek;

	seek = (char *)&m;
	return ((int)seek[0]);
}
