#include "main.h"
/**
 * _islower - entry
 *
 * @c: checks var is lowercase or caps
 *
 * Return: 1 if lower else 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
