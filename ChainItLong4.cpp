#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

class DynamicQueue
{
	private:
		//structure for the queue nodes
		struct QueueNode
		{
			//char word[15];
			string value;
			QueueNode *next;
		};
		
		QueueNode *front;
		QueueNode *rear;
		int numItems;
		
	public:
		// Queue operations
		void enqueue(string);
		void dequeue(string &);
		bool isEmpty() const;
		void clear();
		
		// Constructor
		DynamicQueue();
		
		//Destructor
		~DynamicQueue();
}; 

// The constructor creates an empty queue
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

void DynamicQueue::enqueue(string word)
{
	//string word;
	QueueNode *newNode = NULL;
	
	// Create a new node and store word there.
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

void DynamicQueue::dequeue(string &word)
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

void DynamicQueue::clear()
{
	string value;
	
	while (!isEmpty())
		dequeue(value);
}

//-----------------------------------------------------

int main()
{
	int numPlayers;
	string player1, player2, player3;
	char key;
	string word;
	int wordCount1 = 0, wordCount2 = 0, wordCount3 = 0;
	
	cout << "Hi! Welcome to Chain It Long!" << endl;
	cout << "\nReady to play? Press '1' to continue..." << endl;
	cin >> key;
	
	if (key == '1')
	{
		cout << "\nEnter Player 1 name: " << endl;
		cin >> player1;
		
		cout << "\nEnter Player 2 name: " << endl;
		cin >> player2;
		
		cout << "\nEnter Player 3 name: " << endl;
		cin >> player3;
		
		
		cout << "\nGreat! Let's begin the game!" << endl;
		cout << "\nAssigning a random letter now...." << endl;
		
		unsigned seed = time(0);
		srand(seed);
		
		//int randNum = 65 + rand() % 90;
		//char fLetter = static_cast<char>(randNum);
		 
		
		//cout << "\nThe first letter is... " << fLetter << "!" << endl;
		cout << "\nThe first letter is... N!" << endl;
		
		cout << "\nIt's " << player1 << "'s turn! Please come up with"
			 << " a word with the first letter as shown above!\n" << endl;
	}
	
	else 
	{
		cout << "Come back later!" << endl;	
	}
	
	// create a DynamicQueue object.
	DynamicQueue iQueue1; // create 3 objects for 3 players
	DynamicQueue iQueue2;
	DynamicQueue iQueue3;
	
	
	// Enqueue the words of the first player
	
	cout << "******************************   ROUND 1    ***********************************\n\n";
	
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	
	cout << "\nThe words in the queue are.." << endl;
	cout << "Night" << endl;
		
	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();
		
	cout << "\nThe words in the queue are.." << endl;
	cout << "Timeless" << endl;
		
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();
		
	cout << "\nThe words in the queue are.." << endl;
	cout << "Strain" << endl;
		
	cout << "\nRound 1 has finished!" << endl;
	cout << "\nNow, get ready for Round 2!" << endl;
		
	cout << "\n******************************   ROUND 2    ***********************************\n\n";
	
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	
	cout << "\nThe words in the queue are.." << endl;
	cout << "Night" << " " << "Newspaper" << endl;
		
	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();
		
	cout << "\nThe words in the queue are.." << endl;
	cout << "Timeless" << " " << "Remember" << endl;
		
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();

	cout << "\nThe words in the queue are.." << endl;
	cout << "Strain" << " " << "Rolling" << endl;
		
	cout << "\nRound 2 has finished!" << endl;
	cout << "\nNow, get ready for Round 3!" << endl;
	
	cout << "\n******************************   ROUND 3    ***********************************\n\n";
		
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	
	cout << "\nThe words in the queue are.." << endl;
	cout << "Night" << " " << "Newspaper" << " " << "Government" << endl;
	
	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();
		
	cout << "\nThe words in the queue are.." << endl;
	cout << "Timeless" << " " << "Remember" << " " << "Trampoline" << endl;
		
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();
	
	cout << "\nThe words in the queue are.." << endl;
	cout << "Strain" << " " << "Rolling" << " " << "Elephant" << endl;
	
	cout << "\nRound 3 has finished!" << endl;
	
	cout << "\n*****************************   END GAME    **********************************\n\n";
	
	cout << "                         Calculating the results...                             \n";
	cout << "                          Please wait a second...                               \n";
		
	int highestScore = 0;
		
	if (wordCount1 > wordCount2 && wordCount3)
		highestScore = wordCount1;
	if (wordCount2 > wordCount1 && wordCount3)
		highestScore = wordCount2;
	if (wordCount3 > wordCount1 && wordCount2)
		highestScore = wordCount3;

	cout << "\n-----------------------------   RESULTS     ----------------------------------" << endl;
	cout << endl;
	if (highestScore == wordCount1)
	{
		cout << player1 << " is the WINNER! " << player1 << " scored a total of " << highestScore << " points!" << endl;
		cout << "\nCONGRATULATIONS " << player1 << "!!! YOU ARE THE WINNER OF CHAIN IT LONG!!" << endl;
	}
	if (highestScore == wordCount2)
	{
		cout << player2 << " is the WINNER! " << player2 << " scored a total of " << highestScore << " points!" << endl;
		cout << "\nCONGRATULATIONS " << player2 << "!!! YOU ARE THE WINNER OF CHAIN IT LONG!!" << endl;
	}
	if (highestScore == wordCount3)
	{
		cout << player3 << " is the WINNER!" << player3 << " scored a total of " << highestScore << " points!" << endl;
		cout << "\nCONGRATULATIONS " << player3 << "!!! YOU ARE THE WINNER OF CHAIN IT LONG!!" << endl;
	}
	
	return 0;
}