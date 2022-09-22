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
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	/* set i = last element of dest */
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
