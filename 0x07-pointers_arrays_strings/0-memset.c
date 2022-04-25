#include "holberton.h"

/**
  * _memset - function Fill the first memory with a constant byte
  * @s: pointed to the memory area @s
  * @b: the constant byte
  * @n: the first n bytes of memory area pinted by @s
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
