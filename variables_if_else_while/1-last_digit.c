#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, y);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, y);
	}
	else
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
