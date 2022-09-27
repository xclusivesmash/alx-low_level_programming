/**
* _strlen - finds the length of a string array
* @s: passed string
* Return: length of the string
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

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

	if (n <= _strlen(s))
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
