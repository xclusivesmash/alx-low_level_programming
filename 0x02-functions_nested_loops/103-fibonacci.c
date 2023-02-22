#include "main.h"

/**
 * main - adds Fibonacci's sequence numbers
 * starting with 1 and 2 less that 4 000 000
 * Return: Always 0 (on success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int limit = 4000000;
	int next = a + b, total = b;

	while (1)
	{
		a = b;
		b = next;
		next = a + b;
		if (next > limit)
			break;
		if (next % 2 == 0)
			total = total + next;
	}
	printf("%d\n", total);
	return (0);
}
