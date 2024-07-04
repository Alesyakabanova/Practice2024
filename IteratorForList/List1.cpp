#include "List1.h"
#include <iostream>
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
	if (first == nullptr) { return 0; }
	SElement* tmp = first;
	int data1 = tmp->data;
	first = first->next;
	delete tmp;
	return data1;
}
List::~List() {
	while (first != nullptr) {
		this->DeleteFirst();
	}
}