#include "main.h"

/**
 * _strspn - search a string from a set of byte
 * @s: source string
 * @accept: accept string
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, t = 0;

while (accept[a])
{
b = 0;

while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}

a++;
}

return (t);
}
