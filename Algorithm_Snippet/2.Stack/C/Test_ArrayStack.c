#include "ArrayStack.h"

int main(void)
{
    int i = 0;
    ArrayStack *Stack = NULL;

    AS_CreateStack(&Stack, 10);

    AS_Push(Stack, 3);
    AS_Push(Stack, 37);
    AS_Push(Stack, 11);
    AS_Push(Stack, 12);
    AS_Push(Stack, 323);
    AS_Push(Stack, 373);
    AS_Push(Stack, 113);
    AS_Push(Stack, 123);
    AS_Push(Stack, 113);
    AS_Push(Stack, 123);

    printf("Capacity: %d, Size : %d, Top: %d\n", Stack->Capacity, AS_GetSize(Stack), AS_Top(Stack));

    if (AS_IsFull(Stack))
    {
        printf("Stack is Full.\n");
    }
    for (i = 0; i < 4; i++)
    {
        if (AS_IsEmpty(Stack))
            break;
        printf("Popped : %d, ", AS_Pop(Stack));

        if (!AS_IsEmpty(Stack))
        {
            printf("Current Top: %d\n", AS_Top(Stack));
        }
        else
        {
            printf("Stack Is Empty.\n");
        }
    }
    AS_DestroyStack(Stack);

    return 0;
}
