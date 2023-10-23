#include "main.h"
#include <stdio.h>

/**
	* print_diagsums - main function
	*
	* @size: function parameter1
	*
	* @a: function parameter2
	*
	* Return: 0.
*/

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int n;

	count1 = 0;
	count2 = 0;

	for (n = 0; n < size; n++)
	{
	count1 = count1 + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
	count2 += a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
