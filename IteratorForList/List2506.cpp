#include <iostream>
#include "List1.h"
#include "Stack.h"
#include "ListIterator.h"
#include "Iterator.h"

int main() {
	List list;
	std::cout << "list\n";
	list.AddFirst(3);
	list.AddFirst(5);
	list.AddFirst(2);
	/*list.Print();
	std::cout << "Delete first element\n";
	list.DeleteFirst();
	list.Print();
	std::cout << "Is it empty\n";
	std::cout << list.Empty();*/
	ListIterator iter(&list);
	iter.First();
	for (; !iter.IsDone(); iter.Next()) {
		std::cout << iter.CurrentItem() << "\n";
	}
}