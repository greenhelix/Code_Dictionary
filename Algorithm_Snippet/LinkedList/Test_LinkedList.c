#include "LinkedList.h"

int main(void)
{
    int i = 0;
    int count = 0;
    Node *list = NULL;
    Node *current = NULL;
    Node *newNode = NULL;

    for (i = 0; i < 5; i++)
    {
        newNode = SLL_CreateNode(i);
        SLL_AppendNode(&list, newNode);
    }

    newNode = SLL_CreateNode(-1);
    SLL_AppendNode(&list, newNode);

    newNode = SLL_CreateNode(-2);
    SLL_AppendNode(&list, newNode);

    count = SLL_GetNodeCount(list);

    for (i = 0; i < count; i++)
    {
        current = SLL_GetNodeAt(list, i);
        printf("list[%d] : %d \n", i, current->Data);
    }

    printf("\nInserting 3000 After [2] ... \n\n");

    current = SLL_GetNodeAt(list, 2);
    newNode = SLL_CreateNode(3000);
    SLL_InsertAfter(current, newNode);

    count = SLL_GetNodeCount(list);

    for (i = 0; i < count; i++)
    {
        current = SLL_GetNodeAt(list, i);
        printf("list[%d] : %d \n", i, current->Data);
    }

    printf("\nDestroying List .. \n ");

    for (i = 0; i < count; i++)
    {
        current = SLL_GetNodeAt(list, 0);

        if (current != NULL)
        {
            SLL_RemoveNode(&list, current);
            SLL_DestroyNode(current);
        }
    }
    return 0;
}