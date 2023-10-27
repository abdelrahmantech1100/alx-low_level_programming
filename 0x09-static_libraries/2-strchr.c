#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; s[o] >= '\0'; o++)
	{
	if (s[o] == c)
	return (s + o);
	}
	return (0);
}
