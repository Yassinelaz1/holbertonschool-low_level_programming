#include "main.h"

/**
 * square - check if i x i = x
 * @i:int
 * @x:int
 * Return: 0
 */
int square(int x, int i)
{
	if (i * i == x)
	{
		return (i);
	}

	else if (i * i > x)
	{
		return (-1);
	}
	return (square(x, i + 1));
}
/**
 * _sqrt_recursion- function that returns the natural square root of a number.
 *@n:int
 *Return:0
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (square(n, 1));
	}
	else
	{
		return (-1);
	}
}
