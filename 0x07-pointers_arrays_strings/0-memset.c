/**
* *_memset - fills memory with a constant byte
* @s: string array to fill on
* @b: byte to fill in s
* @n: number of times to fill b
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
