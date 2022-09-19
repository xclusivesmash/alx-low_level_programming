/**
 * swap_int - swops the values of two intergers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
