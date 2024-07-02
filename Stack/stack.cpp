#include "stack.h"

void Stack::Push(int el) {
    list.AddFirst(el);
}
int Stack::Pop() {
     return list.DeleteFirst();

}
bool Stack::Empty() {
    return list.Empty();
}
int Stack::Size() {
    return list.Size();
}

int Stack::operator[](int i)
{
    return list[i];
}
