/**
 * *_strncat - concatenates two strings
 * @dest: string we are concatenating to
 * @src: string we are concatenating
 * @n: bytes of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	/* use j to access elements of src */
	j = 0;
	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
