#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *destPtr = dest;
	char *srcPtr = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	for (src = srcPtr; i < n; i++)
		*dest++ = *src++;

	return (destPtr);
}
