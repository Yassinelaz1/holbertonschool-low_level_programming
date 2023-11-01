#include "main.h"
/**
 * factorial - check the code
 * @n : int
 * Return: Void
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * (factorial(n - 1)));
	}
	else
	{
		return (-1);
	}
}
