#include <stdio.h>
#include "main.h"

/**
*print_alphabet - print letter a-z in asccending order
*letter = prints letters in lowercase
*/
void print_alphabet(void)
/*short description - this prints alphabets*/
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
