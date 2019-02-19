#include <stdlib.h>
#include <stdio.h>
#include "liblinkedlists.h"

/* Main function. */
int main()
{
    char myString[] = "Hello World!\n";

    /* Allocate memory for the head */
    struct Node* head = malloc(sizeof(node));

    /* Populate the linked list */
    for (char* curr = &myString[0]; *curr != '\0'; ++curr)
    {
        append(&head, curr);
    }

    /* Iterate back through it and print each node's data */
    for (node* curr = head; curr != NULL; curr = curr->next)
    {
        printf("%c", curr->data);
    }

    return 0;
}
