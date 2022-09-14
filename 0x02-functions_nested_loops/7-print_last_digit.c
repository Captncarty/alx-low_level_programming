#include "main.h"
/**
 * print_last_digit -function that prints the last digit of a number
 * @n: parameter member r
 * Return: always o if success
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
		n = -r;
	x = r % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
