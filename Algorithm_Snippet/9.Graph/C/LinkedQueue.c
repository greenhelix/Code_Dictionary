#include "LinkedQueue.h"

LinkedQueue* LQ_CreateQueue()
{
    LinkedQueue* Queue = (LinkedQueue*)malloc(sizeof(LinkedQueue));
    
    Queue->Front = NULL;
    Queue->Rear  = NULL;
    Queue->Count = 0;

    return Queue;
}

void LQ_DestroyQueue(LinkedQueue* Queue)
{
    while (!LQ_IsEmpty(Queue))
    {
        Node* Popped = LQ_Dequeue(&Queue);
        LQ_DestroyNode(Popped);
    }

    free(Queue);
}

// Vertex!!!를 Node로!!!
Node *LQ_CreateNode(Vertex* V)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->Data = V;
    NewNode->NextNode = NULL;
    return NewNode;
}

void LQ_DestroyNode(Node* _Node)
{
    free(_Node->Data);
    free(_Node);
}

void LQ_Enqueue(LinkedQueue** Queue, Node* NewNode)
{
    if ( (*Queue)->Front == NULL ) 
    {   // 큐에 노드가 없다면 맨앞에 넣는다.(앞 뒤를 해당 노드로 가리킨다.)     
        (*Queue)->Front = NewNode;
        (*Queue)->Rear  = NewNode;
        (*Queue)->Count++;
    } 
    else
    { // 큐에 노드가 있다면 append 해준다.
        (*Queue)->Rear->NextNode = NewNode;
        (*Queue)->Rear = NewNode;
        (*Queue)->Count++;
    }
}

Node* LQ_Dequeue(LinkedQueue** Queue) // 큐에 노드를 뒤에 넣어준다.
{
    Node* Front = (*Queue)->Front;

    if ( (*Queue)->Front->NextNode == NULL )
    {
        (*Queue)->Front = NULL;
        (*Queue)->Rear  = NULL;
    }
    else
    {
        (*Queue)->Front = (*Queue)->Front->NextNode;
    }

    (*Queue)->Count--;

    return Front;
}

int LQ_IsEmpty(LinkedQueue *Queue)
{
    return (Queue->Front == NULL);
}

// void LQ_Print(LinkedQueue *Q)
// {
//     Vertex *temp = (Vertex *)malloc(sizeof(Vertex));
//     temp = Q->Front;
//     while (temp != NULL)
//     {
//         printf("Queue node %d ->", temp->Data);
//         temp = temp->Next;
//     }
//     printf(" ** %d ->", temp->Data);
//     free(temp);
// }
