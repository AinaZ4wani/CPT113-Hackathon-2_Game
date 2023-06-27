#include "DynamicQueue.h"

#include <iostream>
using namespace std;

// The constructir creates an empty queue
DynamicQueue::DynamicQueue()
{
	front = NULL;
	rear = NULL;
	numItems = 0;
}

//Destructor
DynamicQueue::~DynamicQueue()
{
	clear();
}

// Function enqueue inserts the char
// aka string at the rear of the queue.

void DynamicQueue::enqueue(char word)
{
	QueueNode *newNode = NULL;
	
	// Create a new node and store word there.
	
	newNode = new QueueNode;
	newNode->value = word;
	newNode->next = NULL;
	
	// adjust front and rear as needed.
	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
	}
	
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
	
	// for 5 rounds.
	for (int i=0; i<5; i++)
	{
		numItems++;
	}
}

void DynamicQueue::dequeue(char &word)
{
	QueueNode *temp = NULL;
	
	if (isEmpty())
	{
		cout << "The queue is empty." << endl;
	
	}
	else
	{
		//Save the front node value in word.
		word = front->value;
		
		// remove front node and delete it.
		temp = front;
		front = front->next;
		delete temp;
		
		//update numItems.
		numItems--;
	}
}

// function isEmpty return true if teh queue
//is empty, and false otherwise

bool DynamicQueue::isEmpty() const
{
	bool status;
	
	if (numItems > 0)
		status = false;
	else
		status = true;
	return status;
}

//function clear() dequeues all the elements

void DynamicQueue::clear()
{
	int value; // dummy
	
	while (isEmpty())
		dequeue(value);
}
