/**
* _strlen_recursion - finds the length of a string
* @s: string for which length has to be found
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
