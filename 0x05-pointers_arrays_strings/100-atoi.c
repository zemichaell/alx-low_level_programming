#include "main.h"
#include <stdio.h>
/**
 * is_numerical - check if it is digit
 * @n: number
 * Return:return 1 else 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}
/**
 * _atoi - convert a string to an integer
 * @s: String
 * Return: Always 0.
 */

int _atoi(char *s)
{
unsigned int num, i;
int sign;

sign = 1;
num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
num = (s[i] - 48) + num * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}
}
return (num *sign);
}
