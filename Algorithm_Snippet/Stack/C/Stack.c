#include "Stack.h"

void createEmptyStack(st *s)
{
    s->top = -1;
}

int isFull(st *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void push(st *s, int newItem)
{
    if (isFull(s))
    {
        printf("STACK IS FULL>>>");
    }
    else
    {
        s->top++;                    // 인덱스를 하나 늘려준다.
        s->iteams[s->top] = newItem; // 늘려준 인덱스를 items을 넣어준다.
    }
    count++;
}

void pop(st *s)
{
    if (isEmpty(s))
    {
        printf("\n STACK IS EMPTY\n");
    }
    else
    {
        printf("Item popped = %d", s->iteams[s->top]); // pop된 값을 보여준다.
        s->top--;                                      // 인덱스를 줄여준다.
    }
    count--;
    printf("\n");
}

void printStack(st *s)
{
    printf("Stack: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d", s->iteams[i]);
    }

    printf("\n");
}
