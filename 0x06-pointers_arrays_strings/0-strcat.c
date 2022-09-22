/**
 * *_strcat - concatenate two strings
 * @dest: destination path (pointer to char)
 * @src: pointer to char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (*dest != '\0')
	{
		i++;
	}

	/* set i = last element of dest */
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
