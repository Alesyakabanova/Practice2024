#pragma once
#include "List1.h"
template <class ItemType>
class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual ItemType CurrentItem() const = 0;
protected:
    Iterator();
};
class ListIterator :public Iterator<int> {
    List1* list;
    SElement* ptr;
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
