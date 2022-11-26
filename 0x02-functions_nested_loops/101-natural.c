#include <stdio.h>

/**
* main - finds multiples of 3 or 5 below
* 1024 and prints the results
* Return: always 0 (on success)
*/
int main(void)
{
    int number = 1024;
    int i, sum = 0;

    for (i = 1; i < number; i++)
    {
        if ((i % 3) == 0)
        {
            sum = sum + i;
        }
        else if ((i % 5) == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return (0);
}