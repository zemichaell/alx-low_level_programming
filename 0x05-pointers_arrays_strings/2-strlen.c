#include "main.h"
/**
 * _strlen - length of a string
 * @s: pointer to an string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i += 1;
}
return (i);

}
