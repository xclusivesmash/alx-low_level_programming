/**
* *_strchr - locates a character in a string.
* @s: string to search in
* @c: character to find in s
* Return: pointer to c or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (&(*(s + i)));
		}
		else
		{
			return (NULL);
		}
		i++;
	}
}
