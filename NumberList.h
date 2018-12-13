#pragma once
#include <iostream>

class NumberList
{
private:
	struct ListNode
	{
		double value;
		struct ListNode *next; //To point to the next node
	};

	ListNode *head;

public:
	NumberList()
	{
		head = nullptr;
	}

	~NumberList();
	//Linked list operations
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
};