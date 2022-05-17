#include "LinkedList.h" 

int main(void){
    int i = 0;
    int count = 0;
    Node* list = NULL;
    Node* current = NULL;
    Node* newNode = NULL;

    for(i = 0; i<5; i++){
        newNode = LL_CreateNode(i);
        LL_AppendNode(&list, newNode);
    }

    newNode = LL_CreateNode(-1);
    LL_InsertNewHead(&list, newNode);
    newNode = LL_CreateNode(-2);
    LL_InsertNewHead(&list, newNode);

    count = LL_GetNodeCount(list);

    for(i=0; i<count ; i++){
        current = LL_GetNodeAt(list, i);
        printf("List[%d] : %d\n", i, current->Data);
    }

    printf("\nInserting 3000 After [2] ... \n\n");

    current = LL_GetNodeAt(list, 2);
    newNode = LL_CreateNode(3000);

    LL_InsertAfter(current, newNode);

    count = LL_GetNodeCount(list);

    for(i=0; i<count ; i++){
        current = LL_GetNodeAt(list, i);
        printf("List[%d] : %d\n", i, current->Data);
    }

    printf("\nDestroying List ... \n");

    for(i=0; i<count; i++){
        
        current = LL_GetNodeAt(list, 0);

        if(current != NULL){

            LL_RemoveNode(&list, current);

            LL_DestroyNode(current);
        }
    }
    return 0;
}