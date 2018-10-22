// Specifiction file for the LinkedList clas
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "WeatherStats.h"
#include <iostream> // need for cout
using namespace std; 
template <class T>
class LinkedList
{
private:
	struct ListNode
	{
		T value; // The value in this node.
		struct ListNode *next; // To point to the next node.
	};
	ListNode *head; // List head pointer
public:
	// Constructor
	LinkedList()
	{
		head = nullptr;
	}
	// Distructor 
	~LinkedList()
	{
		ListNode *nodePtr;
		ListNode *nextNode;
		nodePtr = head;
		while (nodePtr != nullptr)
		{
			nextNode = nodePtr->next;
			delete nodePtr;
			nodePtr = nextNode;
		}
	}
	void appendNode(T num)
	{
		ListNode *newNode; // To point to a new node.
		ListNode *nodePtr; // To move through the list.
		// Allocate a new node and store num there
		newNode = new ListNode;
		newNode->value = num;
		newNode->next = nullptr;
		// If there are no nodes in the list make newNode the first node. 
		if (!head)
			head = newNode;
		else // Otherwise, insert newNode at end.
		{
			// Initialize nodePtr to head of list. 
			nodePtr = head;
			// Find the last node in the list. 
			while (nodePtr->next)
				nodePtr = nodePtr->next;
			// Insert newNode as the last node.
			nodePtr->next = newNode;
		}
	}
	void displayList() const
	{
		ListNode *nodePtr; // To move through the list.
		// Position nodePtr at the head of the list.
		nodePtr = head;
		// While nodePtr points to a node, traverse the list. 
		while (nodePtr)
		{
			// Display the value in this node.
			cout << nodePtr->value << endl;
			// move to the next node. 
			nodePtr = nodePtr->next;
		}
	}
	void insertNode(T num)
	{
		ListNode *newNode; // a new node.
		ListNode *nodePtr; // To traverse the list.
		ListNode *previousNode = nullptr; // the previous node.
		// Allocate a new node and stre num there.
		newNode = new ListNode;
		newNode->value = num;
		// If there are no nodes in the list make newNode the first node. 
		if (!head)
		{
			head = newNode;
			newNode->next = nullptr;
		}
		else // Otherwise, insert newNode. 
		{
			// Position nodePtr at the head of list. 
			nodePtr = head;
			// Initialize previouseNode to nullptr.
			previousNode = nullptr;
			// Skip all nodes whose value is less than num.
			while (nodePtr != nullptr && nodePtr->value < num)
			{
				previousNode = nodePtr;
				nodePtr = nodePtr->next;
			}
			// if the new node is to be the 1st in the list, insert it before all other nodes.
			if (previousNode == nullptr)
			{
				head = newNode;
				newNode->next = nodePtr;
			}
			else // Otherwise insert after the previous node.
			{
				previousNode->next = newNode;
				newNode->next = nodePtr;
			}
		}
	}
	void deleteNode(T num)
	{
		ListNode *nodePtr; // To traverse the list
		ListNode *previousNode = NULL; // To point to the previous node. 
		// If the list is empty, do nothing. 
		if (!head)
			return;
		// Determine if the first node is the one.
		if (head->value == num)
		{
			nodePtr = head->next;
			delete head;
			head = nodePtr;
		}
		else
		{
			// Initialize nodePtr to head of list.
			nodePtr = head;
			// Skip all nodes whose value member is not equal to num.
			while (nodePtr != nullptr && nodePtr->value != num)
			{
				previousNode = nodePtr;
				nodePtr = nodePtr->next;
			}
			// If nodePtr is not at the end of the list, link the previous node to the node after
			// nodePtr, then delete nodePtr. 
			if (nodePtr)
			{
				previousNode->next = nodePtr->next;
				delete nodePtr;
			}
		}
	}
	int searchList(T num) const
	{
		int i = 0;
		// To move through the list. 
		ListNode *nodePtr;
		// Position nodePtr at the head of list. 
		nodePtr = head;
		while (nodePtr)
		{
			// If the number is in the list return the index
			if (nodePtr->value == num)
				return i;
			else // move to the next node
			{
				nodePtr = nodePtr->next;
				i++;
			}
		}
		// return -1 if number is not found. 
		i = -1;
		return i;
	}
};
#endif

