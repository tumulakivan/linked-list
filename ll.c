#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

struct Node *createNode(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failure\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void appendNode(struct Node **head, char data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *currNode = *head;
        while (currNode->next != NULL)
            currNode = currNode->next;
        currNode->next = newNode;
    }
}

void printList(struct Node *head)
{
    struct Node *currNode = head;

    while (currNode != NULL)
    {
        printf("%c ", currNode->data);
        currNode = currNode->next;
    }
    printf("NULL\n");
}