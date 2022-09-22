/**
 * *_strncpy - copies a string
 * @dest: string to replace by src
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (; i < n && *(src + n) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	/* add null character if i != n */
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
