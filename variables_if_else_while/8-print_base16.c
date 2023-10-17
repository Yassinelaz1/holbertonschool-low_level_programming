#include <stdio.h>
/**
* main - all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
char alphabet;
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
for (alphabet = 'a'; alphabet <= 'f' ; alphabet++)
{
putchar(alphabet);
}


putchar('\n');
return (0);
}
