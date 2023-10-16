#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

int main(int argc, char *argv[])
{
    struct Node *head = NULL;
    struct Node *currNode;

    appendNode(&head, 'A');
    appendNode(&head, 'B');
    appendNode(&head, 'C');
    appendNode(&head, 'D');
    printList(head);

    // prints everything but the first node
    struct Node *p = head;
    while (p->next != NULL)
    {
        printf("%c ", p->next->data);
        p = p->next;
    }
    printf("\n");

    // skips a node in between
    p = head;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->next->next;
    }
    printf("\n");

    return 0;
}