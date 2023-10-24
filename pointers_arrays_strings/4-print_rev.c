#include <stdio.h>
/**
*print_rev- prints a string, in reverse, followed by a new line.
*@s: char
*Return: 0
*/
void print_rev(char *s)
{
while (*s = '\0')
{
putchar(*s);
s--;
}
putchar('\n');
}
