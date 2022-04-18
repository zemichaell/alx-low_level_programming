#include "main.h"

/**
 * _puts - print a string
 *
 * @str: pointer to char
 * Return: Always 0.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');

}
