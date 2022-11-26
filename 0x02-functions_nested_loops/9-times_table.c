#include "main.h"

/**
* times_table - prints the 9 times table
* Return: nothing
*/
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            product = i * j;
            _putchar('0' + product);
            if (j == (9 - 1))
            {
                _putchar('$');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
