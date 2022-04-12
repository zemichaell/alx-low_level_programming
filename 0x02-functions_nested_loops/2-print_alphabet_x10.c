#include "main.h"
/**
 * print_alphabet - functions that print 10 times the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(viod)
{
char i, alphabet;
for (i = 0; i <= 10; i++)
{
for (alphabet = 'a'; alphabet = 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
