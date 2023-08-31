#include <unistd.h>

/*
 * _putchar - stdout
 *
 * @c: var
 *
 * Return: success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
