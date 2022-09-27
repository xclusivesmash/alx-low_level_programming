#include <std.io>

/**
* print_diagsums - prints the sum of the two 
* diagonals of a square matrix of integers
* @a: square matrix
* @size: size of matrix
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
		}
	}
	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
