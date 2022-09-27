/**
* *_strchr - locates a character in a string.
* @s: string to search in
* @c: character to find in s
* Return: pointer to c or NULL if not found
*/
char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = &(*s);
			break;
		}
		else
		{
			p = NULL;
		}
		s++;
	}
	return (p);
}
