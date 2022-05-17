#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

class Stack
{
private:
    int iteams[MAX];
    int top;
    int count;

public:
    Stack();
    int isFull();
    int isEmpty();
    void push(int newItem);
    void pop();
    void printStack();
};
#endif