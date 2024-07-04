#include "Stack.h"
void Stack::Push(int el) {
	list.AddFirst(el);
}
int Stack::Pop() {
	if (!list.Empty()) {
		return list.DeleteFirst();
	}
}
bool Stack::Empty() {
	return list.Empty();
}