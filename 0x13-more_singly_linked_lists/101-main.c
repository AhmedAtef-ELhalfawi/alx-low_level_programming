#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *list_head;

    list_head = NULL;
    add_nodeint_end(&list_head, 0);
    add_nodeint_end(&list_head, 1);
    add_nodeint_end(&list_head, 2);
    add_nodeint_end(&list_head, 3);
    add_nodeint_end(&list_head, 4);
    add_nodeint_end(&list_head, 98);
    add_nodeint_end(&list_head, 402);
    add_nodeint_end(&list_head, 1024);
    print_listint(list_head);
    reverse_listint(&list_head);
    print_listint(list_head);
    free_listint2(&list_head);

    return (0);
}

