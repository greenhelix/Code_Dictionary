#include "LinkedList.h"

Node *SLL_CreateNode(ElementType newData)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->Data = newData;
    newNode->nextNode = NULL;
};

void SLL_DestroyNode(Node *Node)
{
    free(Node);
};

void SLL_AppendNode(Node **Head, Node *newNode)
{
    if ((*Head) == NULL)
    {
        *Head = newNode;
    }

    Node *Tail = (*Head);

    while (Tail->nextNode != NULL)
    {
        Tail = Tail->nextNode;
    }

    Tail->nextNode = newNode;
};

void SLL_InsertAfter(Node *Current, Node *newNode)
{
    newNode->nextNode = Current->nextNode;
    Current->nextNode = newNode;
};

void SLL_InsertNewHead(Node **Head, Node *newHead)
{
    if (Head == NULL)
    {
        (*Head) = newHead;
    }
    else
    {
        newHead->nextNode = (*Head);
        (*Head) = newHead;
    }
};

void SLL_RemoveNode(Node **Head, Node *Remove)
{
    if (*Head == Remove)
    {
        *Head = Remove->nextNode;
    }
    else
    {
        Node *Current = (*Head);
        while (Current != NULL && Current->nextNode != Remove)
        {
            Current = Current->nextNode;
        }

        if (Current != NULL)
        {
            Current->nextNode = Remove->nextNode;
        }
    }
};

Node *SLL_GetNodeAt(Node *Head, int Location)
{
    Node *Current = Head;
    while (Current != NULL && (--Location) >= 0)
    {
        Current = Current->nextNode;
    }
    return Current;
};

int SLL_GetNodeCount(Node *Head)
{
    int Count = 0;
    Node *Current = Head;
    while (Current != NULL)
    {
        Current = Current->nextNode;
        Count++;
    }
    return Count;
};