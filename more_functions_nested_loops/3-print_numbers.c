#include <stdio.h>
#include "main.h"
/**
 * print_numbers - 0 9
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
