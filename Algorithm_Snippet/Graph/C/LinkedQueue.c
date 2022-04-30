#include "LinkedQueue.h"

void LQ_CreateQueue(LinkedQueue **Queue)
{
    (*Queue) = (LinkedQueue *)malloc(sizeof(LinkedQueue));

    (*Queue)->Front = NULL;

    (*Queue)->Rear = NULL;

    (*Queue)->Count = 0;
}

void LQ_DestroyQueue(LinkedQueue *Queue)
{
    while (!LQ_IsEmpty(Queue))
    {
        Vertex *Popped = LQ_Dequeue(Queue);
        LQ_DestroyNode(Popped);
    }

    free(Queue);
}

Vertex *LQ_CreateNode(ElementType Data)
{
    Vertex *V = (Vertex *)malloc(sizeof(Vertex));

    V->Data = Data;

    V->Next = NULL;

    V->AdjacencyList = NULL;

    V->Visited = NotVisited;

    V->Index = -1;

    return V;
}

void LQ_DestroyNode(Vertex *V)
{
    while (V->AdjacencyList != NULL) // 해당 노드의 연결된 간선들이 없어질 때까지 반복한다.
    {
        Edge *Edge = V->AdjacencyList->Next; // 삭제시킬 노드의 간선의 다음 간선을 임시로 담아둔다.

        DestroyEdge(V->AdjacencyList); // 간선을 삭제 시킨다.

        V->AdjacencyList = Edge; // 임시로 담은 간선을 삭제시킬 간선에 넣어준다.
    }

    free(V); // 메모리 할당 풀어준다.
}

void LQ_Enqueue(LinkedQueue *Queue, Vertex *V)
{
    if (Queue->Front == NULL)
    { // 큐에 노드가 없다면 맨앞에 넣는다.
        Queue->Front = V;
        Queue->Rear = V;
        Queue->Count++;
    }
    else
    { // 큐에 노드가 있다면 append 해준다.
        Queue->Rear->Next = V;
        Queue->Rear = V;
        Queue->Count++;
    }
}

Vertex *LQ_Dequeue(LinkedQueue *Queue)
{
    Vertex *V = Queue->Front;

    if (Queue->Front->Next == NULL)
    {
        Queue->Front = NULL;

        Queue->Rear = NULL;
    }
    else
    {
        Queue->Front = Queue->Front->Next;
    }
    Queue->Count--;

    return V;
}

int LQ_IsEmpty(LinkedQueue *Queue)
{
    return (Queue->Front == NULL);
}