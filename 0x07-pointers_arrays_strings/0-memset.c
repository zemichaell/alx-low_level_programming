#include "main.h"
/**
 * _memset - the function that fills the fist n bytes of memory area pointed to by s
 * @s: memory area pointed by s.
 * @b: the constant byte.
 * @n: the first function to be fill.
 * Return: a pointer to the memory area s.
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
