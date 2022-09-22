/**
 * *cap_string - capitalize a givenn string
 * @s: string to be capitalized
 * Return: s (cap: word for word)
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (*(s + i) >= 'a' && *(s + i) <= 'z')
	{
		*(s + i) = *(s + i) - 32;
	}
	i++;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) <= 'a' && *(s + i) <= 'z') &&
				(*(s + i - 1) == ',' || *(s + i - 1) == ';' ||
				 *(s + i - 1) == '.' || *(s + i - 1) == '!' ||
				 *(s + i - 1) == '?' || *(s + i - 1) == '"' ||
				 *(s + i - 1) == '(' || *(s + i - 1) == ')' ||
				 *(s + i - 1) == '{' || *(s + i - 1) == '}' ||
				 *(s + i - 1) == '\t' || *(s + i - 1) == '\n'))
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
