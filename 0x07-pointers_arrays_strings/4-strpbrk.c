#include "main.h"

/**
	* _strpbrk - main function of the prototype
	*
	* @s: function parameter1
	*
	* @accept: Fuunction parameter2
	*
	* Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
	int e, r;

	for (e = 0; s[e] != '\0'; e++)
	{
	for (r = 0; accept[r] != '\0'; r++)
	{
	if (s[e] == accept[r])
	return (s + e);
	}
	}
	return (0);
}
