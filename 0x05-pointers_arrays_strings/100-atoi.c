#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: String
 * Return: Always 0.
 */

int _atoi(char *s)
{
unsigned int num, i;
int sign;

sign = i;
num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
num = (s[i] - 48) + num * 10;

if (s[i + 1] == ' ')
break;
else if (s[i] == '-')
{
sign *= -1;
}

}

return (num *sign);
}
