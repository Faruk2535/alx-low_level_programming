#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
const listint_t *node = h;
while (node != NULL)
{
printf("%d\n", node->n);
++count;
node = node->next;


}
return (count);
}
