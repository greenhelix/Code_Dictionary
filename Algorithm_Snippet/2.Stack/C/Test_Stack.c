#include "Stack.h"

int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);

    printStack(s);

    pop(s);

    printf("\nAfter popping out \n");
    printStack(s);

    return 0;
}
