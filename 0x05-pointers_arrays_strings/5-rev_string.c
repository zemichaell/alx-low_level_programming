#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to reverse
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0;
int n =0;
char rev;

while (*(s + i) != '\0')
i += 1;
i -= 1;

while (rev < i)
{
rev = s[i];
s[i] = s[rev];
s[rev] = rev;
n++;
i--;
}
}
