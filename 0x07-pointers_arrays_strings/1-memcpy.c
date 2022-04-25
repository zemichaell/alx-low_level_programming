#include "main.h"
/**
 _memcpy - copies n bytes from memory area ponted to src by dest.
 * @dest: the memory area to copy src.
 * @scr: a source buffer to copy character s from.
 * @n: number of bytes to copy from src.
 * Return: print the value of dest
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
unsigned int index;
unsigned char *distination = dist;
const unsigned char *source = src;

for (index = 0; index < n; index++)
des[index] = source[index];

return (dest);
}
