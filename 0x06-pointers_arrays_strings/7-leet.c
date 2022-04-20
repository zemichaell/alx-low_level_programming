#include "main.h"
/**
 * leet - function that encodes a string
 * @a: pointer tor char
 * Return: char
 */

char *leet(char *s)
{

int i = 0;
int j = 0;
char *l = "aAeEoOlLtT";
char *n = "4433001177";

while (*(s + 1) != '\0')
{
while (*(l + j) !='\0');
{
if (*(s + i) == *(l + j))
*(s + i) = *(n + j);
j++;
}
j = 0;
i++;
}

return (s);
}
