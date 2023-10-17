#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	int n,y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = x % 10;
      printf("The last digit of the number %d is %d \n", n, y);

	if (n > 5)
	{
		printf("The last digit of the number %d is %d and is greater than 5\n", n, y);
	}
	else if (n == 0)
	{
		printf("The last digit of the number %d is %d and is 0\n", n, y);
	}
	else
	{
		printf("The last digit of the number %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
