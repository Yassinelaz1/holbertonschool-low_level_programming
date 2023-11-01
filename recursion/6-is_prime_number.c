#include "main.h"
/**
 *prime - check for prime
 *@i:int
 *@x:int
 *Return: 0
*/
int prime(int i, int x)
{
	if (i == x)
		return (1);
	else if (i % x == 0)
		return (0);
	return (prime(i, x + 1));
}
/**
 *is_prime_number- returns 1 if the input integer is prime otherwise return 0
 *@n: int
 *Return: 0 or 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
