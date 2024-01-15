#include "lists.h"
/**
 * check_cycle - a function that checks if a singly
 * linked list has a cycle in it
 * @list: struct
 * Return: 0 if no cycle or 1 if cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow_link = list;
	listint_t *fast_link = list;

	if (!list)
		return (0);

	while (slow_link && fast_link && fast_link->next)
	{
		slow_link = slow_link->next;
		fast_link = fast_link->next->next;
		if (slow_link == fast_link)
			return (1);
	}
	return (0);
}
