#include "main.h"

/**
 * puts2 - print skip one number
 * @str: checked
 *
 * Return: Always 0
 */
void puts2(char *str)
{
int i = 0;

while (*(str + i) != '\n')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');

}
