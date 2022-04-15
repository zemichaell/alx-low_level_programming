#include <main.h>

/**
 * _isupper - check character is uppercase or not
 * @c: character to be check
 * Return: 1 if the character is uppercase otherwise 0.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);

}
