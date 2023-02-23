#include "main.h"
#include <stdio.h>
/**
*print_alphabet_x10 - the fucntion print the alphabet 10 tiems
*Return: return 0
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 10; i++)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
