/**
 * _strcmp - compares two strings
 * @s1: string to compare to
 * @s2: string to compare against
 * Return: 0 if true, othersiwe return check
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int check;

	/* test if the strings have reached '\0' */
	i = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			check = *(s1 + i) - *(s2 + i);
			return (check);
		}
		i++;
	}
	return (0);
}
