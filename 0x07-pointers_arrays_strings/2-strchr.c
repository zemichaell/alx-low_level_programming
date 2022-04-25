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
int a = 0, b;

while (s[a])
{
a++;
}

for (b = 0; b <= a; b++)
{
if (c == s[a])
{
s += b;
return (s);
}
}

return ('\0');
}
