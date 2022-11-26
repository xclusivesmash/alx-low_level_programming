#include <stdio.h>

/**
* main - computes Fibonnaci's numbers
* Return: always 0 (on success)
*/
int main(void)
{
    long int a = 1;
    long int b = 2;
    long int next, counter = 0;

    printf("%li, %li, ", a, b);
    while (counter < (50 - 2))
    {
        next = a + b;
        printf("%li", next);
        a = b; b = next;
        if (counter == (50 - 3))
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
        counter = counter + 1;
    }
    return (0);
}