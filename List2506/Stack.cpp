#include "Stack.h"
void Stack::Push(int el) {
	list.AddFirst(el);
}
int Stack::Pop() {
	if (!list.Empty()) {
		list.DeleteFirst();
	}
}
void Stack::Empty() {

}