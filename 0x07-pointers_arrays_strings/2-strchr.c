#include "main.h"
/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: string character
 */

char *_strch(char *s, char c)
{
int x = 0;
int y;

while (s[x])
{
x++
}

for (y = 0; y <= x; y++)
{
if (c ==s[x])
{
s += y;
return (s);
}
}

return ('\n');
}
