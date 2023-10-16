#include <unistd.h>

/**
 * _putchar - writes thecharacter c to stdout
 * @c: Thea character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, anderrno is not appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
