#include <stdlib.h>
#include "liblinkedlists.h"

/* Append some data to a linked list. */
void append(node** head, char* data)
{
    /* Make sure we didn't get a null */
    if (head == NULL || *head == NULL)
        return;

    /* Initialize the node we're looking at to the one we were given */
    node* targ = *head;

    /* Keep moving through the linked list until the next one doesn't exist */
    while (targ->next != NULL)
    {
        targ = targ->next;
    }

    /* Allocate memory for the next item and assign it */
    (targ->next = malloc(sizeof(node)))->data = *data;

    return;
}

node* prepend(node** head, char* data)
{
    if (head == NULL || *head == NULL)
    {
        return NULL;
    }

    node* newhead = malloc(sizeof(node));
    newhead->data = *data;
    newhead->next = *head;

    return newhead;
}

int length(node* head)
{
    node* curr = head;
    int i;

    for(i = 1; curr->next != NULL; ++i)
    {
        curr = curr->next;
    }
    return i;
}

