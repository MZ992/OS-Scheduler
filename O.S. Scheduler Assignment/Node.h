#pragma once
class Node
{
private:
	int data;
	Node * next;
public:
	Node() :data(0), next(nullptr) {}
	Node(int d) :data(d), next(nullptr) {}
	int getData() { return data; }
	void setData(int d) : data(d) {}
	Node * getNext() { return next; }
	void setNext(node * n) : next(n) {}
	friend class List;
}