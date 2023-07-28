#include "main.h"
/**
 * _islower - entry
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (1);
}
