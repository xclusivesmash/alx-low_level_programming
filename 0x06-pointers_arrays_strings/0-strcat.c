/**
 * *_strcat - concatenate two strings
 * @dest: destination path (pointer to char)
 * @src: pointer to char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char temp[500];
	int i;
	int j;

	i = 0;
	j = 0;
	while (*dest != '\0')
	{
		temp[j] = *dest;
		dest++;
		i++;
		j++;
	}

	/* set i = 0 to access elements of src */
	i = 0;
	while (*src != '\0')
	{
		temp[j] = *src;
		src++;
		i++;
		j++;
	}
	temp[j] = '\0';
	dest = temp;
	return (dest);
}
