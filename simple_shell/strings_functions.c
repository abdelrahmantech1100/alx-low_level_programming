#include "shell.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to destionation
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	if(dest == src || src == 0)
	return(dest)
	while(src[i])
	{
		dest[i] = src[i];
		i++
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated striing
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return(NULL)
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length +1));
	if(!ret)
		return(NULL);
	for(length++; length--)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - print an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the characters to stdout
 * @c: the characters to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WROTE_BUFF_SIZE];

	if (c == BUFF_FLUSH || i >= WRITE_BUFF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
