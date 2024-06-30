#pragma once
#include "List1.h"
class Stack
{
public:
	List1 list;
	void Push(int el);
	int Pop();
	void Empty();
};

