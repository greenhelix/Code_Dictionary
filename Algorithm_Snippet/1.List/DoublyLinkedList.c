#include "DoublyLinkedList.h"

Node *DLL_CreateNode(ElementType NewData)
{
    Node *NewNode = (Node *)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->PrevNode = NULL;
    NewNode->NextNode = NULL;

    return NewNode;
};

void DLL_DestroyNode(Node *Node)
{
    free(Node);
};

void DLL_AppendNode(Node **Head, Node *NewNode)
{
    if ((*Head) == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        Node *Tail = (*Head);

        // 맨 끝의 노드가 Null이 아니라면 맨끝이 아니므로 반복하여 맨 끝의 노드를 찾는다.
        while (Tail->NextNode != NULL)
        {
            Tail = Tail->NextNode;
        }

        // 맨 끝의 노드가 Null 이므로 그 곳에 추가할 노드를 넣어준다.
        Tail->NextNode = NewNode;
        // 그리고 새로운 노드의 앞 노드를 맨 끝의 노드로 설정해준다.
        NewNode->PrevNode = Tail;
    }
};

// 노드 삽입 : 현재 위치에 새로운 노드를 추가한다.
void DLL_InsertAfter(Node *Current, Node *NewNode)
{
    NewNode->NextNode = Current->NextNode; // 추가하고 싶은 노드의 다음 노드를 현재 노드의 다음 노드로 선언해준다.

    NewNode->PrevNode = Current; // 현재 노드는 추가된느 노드의 앞노드라고 선언해준다.

    if (Current->NextNode != NULL) // 현재 노드의 다음 노드가 존재한다면
    {
        Current->NextNode->PrevNode = NewNode; // 현재 노드의 다음 노드의 이전 노드는 현재노드가 아닌 NewNode가 되야 한다.
    }

    Current->NextNode = NewNode;
};

// 노드 제거
void DLL_RemoveNode(Node **Head, Node *Remove)
{
    if (*Head == Remove)
    {

        *Head = Remove->NextNode;

        if ((*Head) != NULL)
            (*Head)->PrevNode = NULL;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
    else
    {
        Node *Temp = Remove;

        // 기존 remove에 해당된 옵션값들을 앞뒤 유저들에게 선물
        if (Remove->PrevNode != NULL)
            Remove->PrevNode->NextNode = Temp->NextNode;

        if (Remove->NextNode != NULL)
            Remove->NextNode->PrevNode = Temp->PrevNode;

        // 꼭 초기화 해준다.
        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
};

// 노드 탐색
// 링크드 리스트의 약점 중 하나이다.
// 헤드부터 시작해서 다음 노드에 대한 포인터를 징검다리 삼아 차근차근
// 노의 수를 세어나가야만 원하는 요소에 접근이 가능하다.
Node *DLL_GetNodeAt(Node *Head, int Location)
{

    Node *Current = Head;

    while (Current != NULL && (--Location) >= 0)
    {
        Current = Current->NextNode;
    }

    return Current;
};

int DLL_GetNodeCount(Node *Head)
{

    unsigned int Count = 0;

    Node *Current = Head;

    while (Current != NULL)
    {
        Current = Current->NextNode;
        Count++;
    }

    return Count;
};