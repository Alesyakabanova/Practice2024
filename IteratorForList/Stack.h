#pragma once
#include "List1.h"
class Stack
{
	List list;
public:
	void Push(int el);
	int Pop();
	bool Empty();
};

