#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @s: function parameter
  *
  * Return: 0.
  */
void _puts_recursion(char *a)
{
	if (*a)
	{
	_putchar(*a);
	_puts_recursion(a + 1);
	}
	else
	_putchar('\n');
}
