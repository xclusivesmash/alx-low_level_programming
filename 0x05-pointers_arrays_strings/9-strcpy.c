/**
 * _strlen - determines the length of a string
 * @s: pointer to char
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * *_strcpy - copies the string pointed to y src,
 * including the terminating null byte '\0',
 * to the buffer pointed to by dest
 * @dest: buffer source
 * @src: soruce to copy
 *
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; j < _strlen(src); j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
