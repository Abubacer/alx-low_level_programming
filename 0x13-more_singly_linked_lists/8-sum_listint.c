#include "lists.h"

/**
 * sum_listint - a function that returns
 * the sum of all the data of a linked list
 * @head: the pointer to the head
 *
 * Return: the sum result
 *         or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int data_sum;
	listint_t *tmp;

	data_sum = 0;
	tmp = head;

	while (tmp)
	{
		data_sum += tmp->n;
		tmp = tmp->next;
	}

	return (data_sum);
}
