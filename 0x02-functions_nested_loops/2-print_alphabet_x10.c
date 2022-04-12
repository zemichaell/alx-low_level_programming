#include "main.h"
/**
 * print_alphabet_x10 - a function that print alphabets 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
char alphabet;
for (i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
