#include <stdio.h>
#include <string.h>
/**
*_puts- prints a string, followed by a new line
*Return: str
*/
void _puts(char *str)
{
    while(*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
