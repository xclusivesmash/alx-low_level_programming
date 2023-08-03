#include "main.h"

/************************* BINARY TO INT *************************/
/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: pointer to binary string. E.g. "100110"
 * Return: converted number or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, power;
	const char *saved;

	/* ERROR CHECK */
	if (b == NULL)
		return (0);
	/* STORE THE ORIGINAL MEMORY */
	saved = b;
	/* MOVE b TILL THE NULL BYTE CHAR IS REACHED */
	while (*b != '\0')
		b = b + 1;
	/* REVERSE b BY 1 BYTE */
	b = b - 1;
	number = 0;
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
