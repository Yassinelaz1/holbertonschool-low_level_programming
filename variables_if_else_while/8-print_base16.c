#include <stdio.h>
/**
* main - all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
char alphabet;
int n;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
