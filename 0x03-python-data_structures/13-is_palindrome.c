#include "lists.h"

/**
 * rev_list - Reverses a singly-linked listint_t list.
 * @head: starting node of the list to reverse.
 * Return: pointer to the head of the reversed list.
 */
listint_t *rev_list(listint_t **head)
{
	listint_t *node = *head, *next, *prev = NULL;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*head = prev;
	return (*head);
}

/**
 * is_palindrome - Checks if list is a palindrome.
 * @head: pointer to the head of the list.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp, *rv;
	size_t lislen = 0, x;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	temp = *head;

	while (temp)
	{
		lislen++;
		temp = temp->next;
	}

	temp = *head;
	for (x = 0; x < (lislen / 2) - 1; x++)
		temp = temp->next;

	if ((lislen % 2) == 0 && temp->n != temp->next->n)
		return (0);

	temp = temp->next->next;

	rv = rev_list(&temp);

	temp = *head;
	while (rv)
	{
		if (temp->n != rv->n)
			return (0);
		temp = temp->next;
		rv = rv->next;
	}

	return (1);
}
