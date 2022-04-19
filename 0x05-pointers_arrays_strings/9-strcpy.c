#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: pointer will be changed
 * @src: pointer will be changed
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
