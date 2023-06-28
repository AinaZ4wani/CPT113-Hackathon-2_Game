#ifndef DynamicQueue_H
#define DynamicQueue_H
#include <iostream>
using namespace std;

class DynamicQueue // Name of the class
{
	private:
		//structure for the Queue nodes
		struct QueueNode
		{
			string value; // data type of string to store the words
			QueueNode *next;
		};
		
		QueueNode *front;
		QueueNode *rear;
		int numItems;
		
	protected:
		// Queue operations
		void enqueue(string);
		void dequeue(string &);
		bool isEmpty() const;
		void clear();
		
		// Constructor
		DynamicQueue();
		
		// Destructor
		~DynamicQueue();
};

#endif

