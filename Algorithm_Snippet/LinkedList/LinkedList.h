#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode *nextNode;
} Node;

Node *SLL_CreateNode(ElementType newData);
void SLL_DestroyNode(Node *Node);
void SLL_AppendNode(Node **Head, Node *newNode);
void SLL_InsertAfter(Node *Current, Node *newNode);
void SLL_InsertNewHead(Node **Head, Node *newHead);
void SLL_RemoveNode(Node **Head, Node *Remove);
Node *SLL_GetNodeAt(Node *Head, int Location);
int SLL_GetNodeCount(Node *Head);

#endif