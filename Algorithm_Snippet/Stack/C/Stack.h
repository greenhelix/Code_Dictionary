#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct stack
{
    int iteams[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s);
int isFull(st *s);
int isEmpty(st *s);
void push(st *s, int newItem);
void pop(st *s);
void printStack(st *s);

#endif