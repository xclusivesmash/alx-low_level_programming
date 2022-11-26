#include <stdio.h>

/**
* main - computes Fibonnaci's numbers
* less that 4M and finds sum of even-valued
* numbers
* Return: always 0 (on success)
*/
int main(void)
{
    long int a = 1;
    long int b = 2;
    long int next, sum = b;

    while (1)
    {
        next = a + b;
        a = b; b = next;
        if (((next % 2) == 0) && next < 4000000)
        {
            sum = sum + next;
        }
        else if (next > 4000000)
        {
            break;
        }
    }
    printf("%li\n", sum);
    return (0);
}