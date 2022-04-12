#include "main.h"
/**
 * prit_alphabet - functions that print the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
