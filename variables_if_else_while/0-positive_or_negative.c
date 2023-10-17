#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- checks if positive or negative
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d,in ngativ"\n, n);
	}
	else if (n > 0)
	{
		printf("%d,is positf" / n, n);
	}
	else
	{
		printf("%d,is zero" / n, n);
	}

	return (0);
}
