#include "main.h"
/**
 * _isalpha - entry
 *
 * @c: checks if bar is alphabetical
 *
 * Return: 1 if alpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
