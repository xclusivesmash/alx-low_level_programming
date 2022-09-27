#define NULL 0

/**
* *_strstr - locates a substring
* @haystack: string to search in
* @needle: string to search for
* Return: pointer to first occurrence of needle
* in haystack, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
