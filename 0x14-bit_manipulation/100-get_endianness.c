#include "main.h"

/**
 * get_endianness - ends endianness.
 * Return: 0 if big endian, 1 if small endian.
*/
int get_endianness(void)
{
	int n = 0x00000001;
	char *pointer = (char *) (&n);

	return (pointer[0]);
}
