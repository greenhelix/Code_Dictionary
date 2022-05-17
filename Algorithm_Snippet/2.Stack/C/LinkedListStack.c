#include "LinkedListStack.h"

void LLS_CreateStack(LinkedListStack **Stack)
{
    (*Stack) = (LinkedListStack *)malloc(sizeof(LinkedListStack));
    (*Stack)->List = NULL;
    (*Stack)->Top = NULL;
};

void LLS_DestroyStack(LinkedListStack *Stack)
{
    while (!LLS_IsEmpty(Stack))
    {
        Node *Popped = LLS_Pop(Stack);
        LLS_DestroyNode(Popped);
    }
    free(Stack);
};

Node *LLS_CreateNode(char *NewData)
{
    Node *NewNode = (Node *)malloc(sizeof(Node));
    NewNode->Data = (char *)malloc(strlen(NewData) + 1);
    strcpy(NewNode->Data, NewData);
    NewNode->NextNode = NULL;
    return NewNode;
};

void LLS_DestroyNode(Node *_Node)
{
    free(_Node->Data);
    free(_Node);
};

void LLS_Push(LinkedListStack *Stack, Node *NewNode)
{
    if (Stack->List == NULL)
    { // list가 비어있는 경우 newnode를 바로 넣어준다.
        Stack->List = NewNode;
    }
    else
    {
        Node *OldTop = Stack->List; // list에 비어있지 않은 경우, list전체를 oldtop이라해준다.

        while (OldTop->NextNode != NULL)
        {                              // oldtop에 들어있는 노드의 nextnode가 null이 될때까지 반복을 돌린다.(끝까지 돌아간다는 의미이다.)
            OldTop = OldTop->NextNode; // oldtop의 next노드를 다음 oldtop으로 가리키며 계속 탐색을 해준다.
        }

        OldTop->NextNode = NewNode; // 마지막 null의 node가 nextnode이므로 그곳에 newnode를 넣어준다.
    }

    Stack->Top = NewNode;
};

Node *LLS_Pop(LinkedListStack *Stack)
{
    Node *TopNode = Stack->Top;

    if (Stack->List == Stack->Top)
    {
        Stack->List = NULL;
        Stack->Top = NULL;
    }
    else
    {
        Node *CurrentTop = Stack->List;

        while (CurrentTop != NULL && CurrentTop->NextNode != Stack->Top)
        {
            CurrentTop = CurrentTop->NextNode;
        }

        Stack->Top = CurrentTop;

        CurrentTop->NextNode = NULL;
    }

    return TopNode;
};

Node *LLS_Top(LinkedListStack *Stack)
{
    return Stack->Top;
};

int LLS_GetSize(LinkedListStack *Stack)
{

    int Count = 0;
    Node *Current = Stack->List;

    while (Current != NULL)
    {
        Current = Current->NextNode;
        Count++;
    }

    return Count;
};

int LLS_IsEmpty(LinkedListStack *Stack)
{

    return (Stack->List == NULL);
};