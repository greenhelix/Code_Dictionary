#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode{
    ElementType Data;
    struct tagNode* NextNode;
} Node;

Node* LL_CreateNode(ElementType NewData);
void LL_DestroyNode(Node* Node);
void LL_AppendNode(Node** Head, Node* NewNode);
void LL_InsertAfter(Node* Current, Node* NewNode);
void LL_InsertNewHead(Node** Head, Node* remove);
void LL_RemoveNode(Node** Head, Node* Remove);
Node* LL_GetNodeAt(Node* Head, int Location);
int LL_GetNodeCount(Node* Head);

#endif
