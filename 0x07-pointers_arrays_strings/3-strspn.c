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

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				sum++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (sum);
			j++;
		}
		i++
	}
	return (sum);
}
