#include <stdio.h>
#include "main.h"
/**
 * print_line - Check description
 * @n : integer
 * Return: void (Success) .
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
