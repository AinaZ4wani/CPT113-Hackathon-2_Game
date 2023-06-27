#ifndef DynamicQueue_H
#define DynamicQueue_H

#include <iostream>
using namespace std;

class DynamicQueue
{
	private:
		//structure for the queue nodes
		struct QueueNode
		{
			char word[15];
			QueueNode *next;
		};
		
		QueueNode *front;
		QueueNode *rear;
		int numItems;
		
	public:
		// Queue operations
		void enqueue(char);
		bool isEmpty() const;
		void clear();
		
		// Constructor
		DynamicQueue();
		
		//Destructor
		~DynamicQueue();
};

#endif

