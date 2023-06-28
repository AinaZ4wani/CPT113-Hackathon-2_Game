#include "DynamicQueue.h"
#include <iostream>
using namespace std;

// The constructor creates an empty queue
DynamicQueue::DynamicQueue()
{
	front = NULL;
	rear = NULL;
	numItems = 0;
}

// Function enqueue to insert the string in the Queue
void DynamicQueue::enqueue(string word)
{
	//string word;
	QueueNode *newNode = NULL;
	
	// Create a new node and store the word there.
	newNode = new QueueNode;
	//newNode->value = word;
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
	
	numItems++;
}

// Function dequeue to dequeue the words and retrieve them
void DynamicQueue::dequeue(string &word)
{
	QueueNode *temp = NULL;
	
	if (isEmpty())
	{
		cout << "The queue is empty." << endl;
	}
	else
	{
		// Save the front node value in word.
		word = front->value;
		
		// Remove front node and delete it.
		temp = front;
		front = front->next;
		delete temp;
		
		// Update number of items in the Queue
		numItems--;
	}
}

// Function isEmpty returns true if the queue is empty, and false otherwise
bool DynamicQueue::isEmpty() const
{
	bool status;
	
	if (numItems > 0)
		status = false;
	else
		status = true;
	return status;
}

// Clears all words inside the Queue
void DynamicQueue::clear()
{
	string value;
	
	while (!isEmpty())
		dequeue(value);
}


// Destructor destroys the queue
DynamicQueue::~DynamicQueue()
{
	clear();
}
