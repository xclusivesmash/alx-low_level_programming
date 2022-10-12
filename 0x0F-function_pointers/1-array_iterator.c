/**
* array_iterator - execs a function given as param
* @array: array of integers
* @size: size of the array
* @action: pointer to function
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
