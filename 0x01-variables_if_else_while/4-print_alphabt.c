#include <stdio.h>
/** 
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q')
continue;

else if (letter == 'e')
continue;

putchar(letter);
}
putchar('\n');

return (0);
}
