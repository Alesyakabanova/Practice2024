#ifndef STACK_H
#define STACK_H
#include "List.h"
class Stack
{
public:
    List list;
    void Push(int el);
    int Pop();
    bool Empty();
    int Size();
    int operator[](int i);
};

#endif // STACK_H
