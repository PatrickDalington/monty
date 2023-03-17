#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const listint_t *h);
size_t dlistint_len(const listint_t *h);
listint_t *add_dnodeint(listint_t **head, const int n);
listint_t *add_dnodeint_end(listint_t **head, const int n);
void free_dlistint(listint_t *head);

listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index);
int sum_dlistint(listint_t *head);
listint_t *insert_dnodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_dnodeint_at_index(listint_t **head, unsigned int index);


#endif
