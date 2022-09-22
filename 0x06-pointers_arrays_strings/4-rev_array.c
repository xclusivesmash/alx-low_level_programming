/**
 * reverse_array - reverses the contents of an array
 * @a: array of integers
 * @n: number of elements of a
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = 0;
	for (i = (n - 1); i > 0; i--)
	{
		*(a + j) = *(a + i);
		j++;
	}
}
