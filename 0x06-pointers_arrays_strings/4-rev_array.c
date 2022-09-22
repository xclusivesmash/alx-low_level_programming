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
	int temp;

	j = n - 1;
	i = 0;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i++;
		j--;
	}
}
