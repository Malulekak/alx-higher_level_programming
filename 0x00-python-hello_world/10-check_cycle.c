#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: a singly-linked list.
 *
 * Return: 0 ff there is no cycle else retuns 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *pudi, *kgomo;

	if (list == NULL || list->next == NULL)
		return (0);

	pudi = list->next;
	kgomo = list->next->next;

	while (pudi && kgomo && kgomo->next)
	{
		if (pudi == kgomo)
			return (1);

		pudi = pudi->next;
		kgomo = kgomo->next->next;
	}

	return (0);
}
