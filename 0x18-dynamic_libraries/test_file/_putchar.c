#include "main.h"

/**
  * _putchar - writes character c to stdout
  * @c: character to print
  * Return: on 1 success
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

