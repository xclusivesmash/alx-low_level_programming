/**
 * *leet - encodes a string in 1337 leet
 * @s: string to be encoded
 * Return: s
 */
char *leet(char *s)
{
	/* map characters to numbers for encoding */
	char mm[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char xx[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (mm[j] != '\0')
		{
			if (s[i] == mm[j])
			{
				s[i] = xx[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
