/**
* _strspn - gets the length of a prefix substring
* @s: main string
* @accept: substring
* Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
	int sum = 0;
	int i = 0;
	int j;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				sum++;
				break;
			}
			j++;
		}
		i++
	}
	return (sum + 1);
}
