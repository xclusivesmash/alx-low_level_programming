#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: pointer to binary string. E.g. "100110"
 * Return: converted number or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, power;
	const char *saved;

	/* ERROR CHECK */
	if (b == NULL)
		return (0);
	saved = b;
	while (*b != '\0')
		b = b + 1;
	b = b - 1;
	power = 0;
	while (b >= saved)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number + ((*b - '0') * (1 << power));
		b = b - 1;
		power = power + 1;
	}
	return (number);
}
