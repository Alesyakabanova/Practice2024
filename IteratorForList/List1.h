#pragma once
struct SElement
{
    int data;
    SElement* next;
    SElement() = default;
    SElement(const int& data_, SElement* next_ = nullptr) :
        data{ data_ }, next{ next_ } {}
    ~SElement() = default;
};
class ListIterator;
class List1
{
public:
    friend class ListIterator;
	List1();
	void Print();
	void AddFirst(int Element);
	int DeleteFirst();
	bool Empty();
private:
	SElement* first;
};




