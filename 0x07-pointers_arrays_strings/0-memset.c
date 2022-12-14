/**
* *_memset - fills memory with a constant byte
* @s: string array to fill on
* @b: byte to fill in s
* @n: number of times to fill b
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int length = n;

	if (length > 0)
	{
		int i;

		for (i = 0; i < length; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
