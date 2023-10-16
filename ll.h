#ifndef LL_H_
#define LL_H_

struct Node
{
    struct Node *next;
    char data;
} Node;

struct Node *createNode(char data);
void appendNode(struct Node **newNode, char data);
void printList(struct Node *head);

#endif