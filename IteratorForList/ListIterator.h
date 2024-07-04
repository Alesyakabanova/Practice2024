#pragma once
#include "List1.h"
#include "Iterator.h"
class ListIterator :public Iterator<int> {
    List* list;
    SElement* ptr;
public:
    ListIterator(List* l) {
        list = l;
    }
    void First() override {
        ptr = list->first;
    }
    bool IsDone() const override {
        return ptr == nullptr;
    }
    void Next() override {
        if (!IsDone()) {
            ptr = ptr->next;
        }
    }
    int CurrentItem() const override {
        return ptr->data;
    }
};

