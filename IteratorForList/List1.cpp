#include "List1.h"
#include <iostream>
List1::List1() {
	first = nullptr;
}
void List1::Print() {
	for (SElement* tmp = first; tmp != nullptr; tmp = tmp->next) {
		std::cout << tmp->data << '\n';
	}
}
void List1::AddFirst(int Element) {
	SElement* NewEl = new SElement(Element, this->first);
	this->first = NewEl;
}
bool List1::Empty() {
	return (first == nullptr);
}
int List1::DeleteFirst() {
	if (first == nullptr) { return 0; }
	SElement* tmp = first;
	first = first->next;
	delete tmp;
	return tmp->data;
}