#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Nesting and loops
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
