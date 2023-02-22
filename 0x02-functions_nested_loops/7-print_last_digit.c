#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: integer
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int value;

	value = n % 10;
	if (value < 0)
		value = value * -1;
	_putchar(value + '0');
	return (value);
}
