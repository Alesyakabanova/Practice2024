#ifndef LIST_H
#define LIST_H
#include <iostream>
class List
{
public:
    struct SElement
    {
        int data;
        SElement* next;
        SElement() = default;
        SElement(const int& data_, SElement* next_ = nullptr) :
            data{ data_ }, next{ next_ } {}
        ~SElement() = default;
    };
    List();
    void Print();
    void AddFirst(int Element);
    int DeleteFirst();
    bool Empty();
    int Size();
    int operator[](int i);
private:
    SElement* first;
};

#endif // LIST_H
