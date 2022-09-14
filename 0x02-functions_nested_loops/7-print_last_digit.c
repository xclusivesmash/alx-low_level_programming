#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	_putchar(ldigit + '0');
	return (ldigit);
}
