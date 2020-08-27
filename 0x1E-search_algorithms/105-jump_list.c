#include "search_algos.h"
#include <math.h>

/**
* jump_list - does a jump search on a list
* Return: pointer to first node where value is located
* @list: pointer to head of the list to search
* @value: value to search for
* @size: number of nodes
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int a = 0, b = 0, jump, i = 0;
	listint_t *lista = list, *listb = list;

	if (!list || size == 0)
		return (NULL);
	jump = sqrt(size);
	while (b < size && listb->n < value)
	{
		a = b;
		lista = listb;
		/*b += jump;*/
		/* increment tempb by jump */
		for (i = 0; i < jump; i++)
		{
			if (listb->next)
				listb = listb->next;
			b++;
		}
		/* print stuff */
		printf("Value checked at index [%i] = [%i]\n", (int) listb->index, listb->n);
		if (b >= size)
		{
			b = listb->index;
			break;
		}
		if (a >= size)
			return (NULL);
	}
	/* print other stuff */
	printf("Value found between indexes [%u] and [%u]\n", a, b);
	while (lista->n < value)
	{
		printf("Value checked at index [%u] = [%i]\n", a, lista->n);
		/* print stuff */
		a += 1;
		/* increment lista by 1 */
		lista = lista->next;
		if (a == b + 1 || a == size)
			return (NULL);
	}
	/* print last thing */
	printf("Value checked at index [%u] = [%i]\n", a, lista->n);
	if (lista->n == value)
		return (lista);
	return (NULL);
}
