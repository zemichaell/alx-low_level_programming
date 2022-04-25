#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
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
=======
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
>>>>>>> bdb736d015fa99f13f2d56bef91412f0ff70d613

	return ('\0');
}
