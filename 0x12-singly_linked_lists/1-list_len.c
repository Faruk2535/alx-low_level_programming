#include "lists.h"

/**
* list_len - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: no of element
*/

size_t list_len(const list_t *h)
{
const list_t *cursor = h;
size_t count = 0;

while(cursor != NULL)
{
count++;
cursor = cursor->next;
}

return (count);
}
