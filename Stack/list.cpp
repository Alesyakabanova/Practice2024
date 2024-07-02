#include "list.h"

List::List() {
    first = nullptr;
}
void List::Print() {
    for (SElement* tmp = first; tmp != nullptr; tmp = tmp->next) {
        std::cout << tmp->data << '\n';
    }
}
void List::AddFirst(int Element) {
    SElement* NewEl = new SElement(Element, this->first);
    this->first = NewEl;
}
bool List::Empty() {
    return (first == nullptr);
}
int List::DeleteFirst() {
    if (first == nullptr) { return 0 ;}
    SElement* tmp = first;
    first = first->next;
    delete tmp;
    return tmp->data;
}
int List::Size() {
    SElement* tmp=first;
    int i = 0;
    while(tmp != nullptr) {
        tmp=tmp->next;
        i++;
    }
    return i;
}

int List::operator[](int i)
{
    SElement* tmp=first;
    while (i != 0) {
        tmp=tmp->next;
        i--;
    }
    return tmp->data;
}
