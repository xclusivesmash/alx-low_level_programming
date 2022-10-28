#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to string
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0, i;

	if (b == NULL)
		return (0);
	/* find length of string */
	len = 0;
	while (b[len] != '\0')
	{
		len = len + 1;
	}

	/* keep len within index bounds */
	len = len - 1;
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}

		if (b[i] == '1')
		{
			num = num + (1 * 1 << len);
		}
		i = i + 1;
		len = len - 1;
	}
	return (num);
}
