#include "Stack.h"
#include <iostream>

int main()
{
    int ch;
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.printStack();

    s.pop();

    std::cout << "\nAfter popping out \n";

    s.printStack();

    return 0;
}
