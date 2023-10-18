#include "main.h"
/**
 * print_last_digit - last_digit
 * @r: An integre input
 * Return: 0
 */

int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l);
	return (l);
}
