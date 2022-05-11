#include "Stack.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Stack::Stack()
{
    top = -1;
}

int Stack::isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int Stack::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void Stack::push(int newItem)
{
    if (isFull())
    {
        cout << "STACK IS FULL>>>";
    }
    else
    {
        top++;                 // 인덱스를 하나 늘려준다.
        iteams[top] = newItem; // 늘려준 인덱스를 items을 넣어준다.
    }
    count++;
}

void Stack::pop()
{
    if (isEmpty())
    {
        cout << "\n STACK IS EMPTY\n";
    }
    else
    {
        cout << "Item popped= " << iteams[top]; // pop된 값을 보여준다.
        top--;                                  // 인덱스를 줄여준다.
    }
    count--;
    cout << "\n";
}

void Stack::printStack()
{
    cout << "Stack: ";

    for (int i = 0; i < count; i++)
    {
        cout << iteams[i] << " ";
    }

    cout << "\n";
}