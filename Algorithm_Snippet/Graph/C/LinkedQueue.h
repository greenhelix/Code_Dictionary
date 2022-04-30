#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Graph.h"

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode *NextNode;
} Node;

typedef struct tagLinkedQueue
{
    Vertex *Front;
    Vertex *Rear;
    int Count;
} LinkedQueue;

void LQ_CreateQueue(LinkedQueue **Queue);
void LQ_DestroyQueue(LinkedQueue *Queue);

Vertex *LQ_CreateNode(ElementType Data);
void LQ_DestroyNode(Vertex *V);

void LQ_Enqueue(LinkedQueue *Queue, Vertex *V);
Vertex *LQ_Dequeue(LinkedQueue *Queue);

int LQ_IsEmpty(LinkedQueue *Queue);

#endif