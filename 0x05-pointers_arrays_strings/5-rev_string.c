#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to reverse
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *start_c, *end_c, c;
int i, count;
int length = 0;

for (i = 0; s[i]; i++)
{
length++;
}

count = length;

start_c = s;
end_c = s;

for (i = 0; i < count -1; i++)
{
c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++
end_c--
}
}
