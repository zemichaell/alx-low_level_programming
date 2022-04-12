#include "main.h"
/**
 * 2-print_alphabet_x10 - print alphabets 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
char alphabet;

for (i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet = 'z'; alphabet++)
{
_putchar(alphabet);i;
}
_putchar('\n');
}
