#ifndef LIBLINKEDLISTS_H
#define LIBLINKEDLISTS_H

/*
 * Struct for a node in a linked list
 * that holds chars.
 */
typedef struct Node
{
    char data;
    struct Node* next;
} node;

void append(node** head, char* data);
node* prepend(node** head, char*);
int length(node* head);

#endif //LIBLINKEDLISTS_H
