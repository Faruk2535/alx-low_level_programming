#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_unit- converts binary to unit.
 * @b: pointer to a binary number.
 * Return: return dec
 **/

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int dec = 0;
if(!b)
return (0);

while (b[i] != '\0')
{
if(b[i] < '0' || b[i] > '1')
return (0);

dec += (pow(2,(strlen(b)-(1+i))) * b[i]);
i++;
}
return (dec);
}
