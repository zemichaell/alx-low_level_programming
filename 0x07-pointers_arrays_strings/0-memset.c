#include "main.h"
/**
 * _memset - the function tha fill first  byte of memory area pointed
 * @s: memory area pointed
 * @b: the constant byte
 * @n: the first to be fill
 * Return: the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
s[x] = b;

return (s)
}
