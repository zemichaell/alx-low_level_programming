#include "main.h"
/**
 * _memcpy - copies n bytes from memory area ponted to src by dest.
 * @dest: the memory area to copy src.
 * @scr: a source buffer to copy character s from.
 * @n: number of bytes to copy from src.
 * Return: print the value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
