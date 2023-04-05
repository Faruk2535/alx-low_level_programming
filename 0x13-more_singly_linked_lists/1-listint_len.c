#include "lists.h"

/**
 * listint_len - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
unsigned int count = 0;
const listint_t *node = h;
while (node != NULL)
{

count += 1;
node = node->next;


}
return (count);
}
