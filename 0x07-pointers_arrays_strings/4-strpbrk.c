#define NULL 0

/**
* *_strpbrk - searches a string for any set of bytes
* @s: string to be searched
* @accept: search base string
* Return: pointer to first occurrence in s
* or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			else
			{
				return (NULL);
			}
		}
		i++;
	}
}
