#include "DoublyLinkedList.h"

int main(void)
{

    int i = 0;
    int count = 0;
    Node *list = NULL;
    Node *newNode = NULL;
    Node *current = NULL;

    for (i = 0; i < 5; i++)
    {
        newNode = DLL_CreateNode(i);
        DLL_AppendNode(&list, newNode);
    }

    count = DLL_GetNodeCount(list);

    for (i = 0; i < count; i++)
    {
        current = DLL_GetNodeAt(list, i);
        printf("List[%d] : %d \n", i, current->Data);
    }

    printf("\nInserting 3000 After [2]... \n\n");

    current = DLL_GetNodeAt(list, 2);
    newNode = DLL_CreateNode(3000);
    DLL_InsertAfter(current, newNode);

    count = DLL_GetNodeCount(list);

    for (i = 0; i < count; i++)
    {
        current = DLL_GetNodeAt(list, i);
        printf("List[%d] : %d \n", i, current->Data);
    }

    printf("\nDestroying LIST ... \n");

    count = DLL_GetNodeCount(list);

    for (i = 0; i, count; i++)
    {
        current = DLL_GetNodeAt(list, 0);

        if (current != NULL)
        {
            DLL_RemoveNode(&list, current);
            DLL_DestroyNode(current);
        }
    }

    return 0;
}