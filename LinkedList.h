#pragma once
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
private:
	struct ListNode
	{
		T value;
		struct ListNode *next;
	};

	ListNode *head;

public:
	LinkedList()
	{
		head = nullptr;
	}

	~LinkedList();
	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	void displayList() const;
};

template <class T>
void LinkedList<T>::appendNode(T newValue)
{
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->value = sum;
	newNode->next = nullptr;

	if (!head)
		head = newnode;
	else
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}

template <class T>
void LinkedList <T>::displayList() const
{
	ListNode *nodePtr;

	nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
}

template <class T>
void LinkedList<T>::insertNode(T newValue)
{
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *previousNode = nullptr;

	newNode = new ListNode;
	newNode->value = num;

	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;

		previousNode = nullptr;

		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

template <class T>
void LinkedList<T>::deleteNode(T searchValue)
{
	ListNode *nodePtr;
	ListNode *previousNode;

	if (!head)
		return;

	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

template <class T>
LinkedList<T>::~LinkedList()
{
	ListNode *nodePtr;
	ListNode *nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextnode = nodePtr->next;

		delete nodePtr;

		nodePtr = newNode;
	}
}