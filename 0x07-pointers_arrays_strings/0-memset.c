#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value used to complete the memory
  *
  * @s: Function paramater1
  *
  * @n: Function parameter2
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
