#include "main.h"
/**
 * puts_half - print characters of string
 * @srt: pointer to int that will be changed
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
int i;
int last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str(i); i++)
{
_putchar (str[i]);
}

_putchar ('\n');
}
