#include "main.h"
/**
 *puts_half - function that prints half of a string,
 *@str:char
 *Return: void
 */
void puts_half(char *str)
{
    int n = strlen(str);
    int m = n / 2;
    int i;
    if (n % 2 == 0)
    {
        for (i = m; i > n; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        m = m + 1;
        for (i = m; i > n; i++)
        {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
}
