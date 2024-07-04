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
class List
{
public:
    friend class ListIterator;
	List();
	void Print();
	void AddFirst(int Element);
	int DeleteFirst();
	bool Empty();
    ~List();
private:
	SElement* first;
};




