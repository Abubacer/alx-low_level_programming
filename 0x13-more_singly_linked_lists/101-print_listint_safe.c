#include "lists.h"

/**
 * realloc_mem - a function that reallocates memory
 * for an array of pointers to the  nodes of a linked list
 * @int_list: the linked list to check
 * @list_size: the size of the new linked list
 * @new_node: the new node to  add
 *
 * Return: the pointer to the new linked list
 */

const listint_t **realloc_mem(const listint_t **int_list, size_t
		list_size, const listint_t *new_node)
{
	const listint_t **new_listint;
	size_t idx;

	new_listint = malloc(list_size * sizeof(listint_t *));

	if (new_listint == 0)
	{
		free(int_list);
		exit(98);
	}

	for (idx = 0; idx < list_size - 1 ; idx++)
		new_listint[idx] = int_list[idx];
	new_listint[idx] = new_node;
	free(int_list);

	return (new_listint);
}

/**
 * print_listint_safe - a function that prints a linked list
 * This function can print lists with a loop
 * the function go through the list only once
 * @head: the pointer to the head
 *
 * Return: the number of nodes in the list
 *         or exit with status 98 if it fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n_node;
	const listint_t **int_list;

	n_node = 0;
	int_list = NULL;

	while (head != 0)
	{
		for (i = 0 ; i < n_node ; i++)
		{
			if (head == int_list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(int_list);
				return (n_node);
			}
		}

		n_node++;
		int_list = realloc_mem(int_list, n_node, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(int_list);
	return (n_node);
}
