#include <iostream>
#include "DynamicQueue.h"
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int numPlayers;
	string player1, player2, player3;
	char key;
	
	cout << "Hi! Welcome to Chain It Long!" << endl;
	cout << "\nReady to play? Press '1' to continue..." << endl;
	cin >> key;
	
	if (key == '1')
	{
		cout << "\nEnter the number of players: " << endl;
		cin >> numPlayers;
		
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
		
		int randNum = 66 + rand() % 90;
		char fLetter = static_cast<char>(randNum); 
		
		cout << "\nThe first letter is... " << fLetter << "!" << endl;
		
		cout << "\nIt's " << player1 << "'s turn! Please come up with"
			 << " a word with the first letter as shown above!" << endl;
	}
	
	else 
	{
		cout << "Come back later!" << endl;	
	}
	
	const int MAX_VALUES = 5;
	
	// create a DynamicQueue object.
	DynamicQueue iQueue1; // create 3 objects for 3 players
//	DynamicQueue iQueue2;
//	DynamicQueue iQueue3;
	
	
	// Enqueue the words of the first player,
	for (int i=0; i<MAX_VALUES; i++)
	{
		
		cout << player1 << ", have you thought of a word? write here: " << endl;
		cin >> word;
		iQueue1.enqueue(word);
		cout << "\nWord is recieved! Pass to the next player." << endl;
		
		cout << player2 << ", have you thought of a word? write here: " << endl;
		cin >> word;
		iQueue2.enqueue(word);
		cout << "\nWord is recieved! Pass to the next player." << endl;
		
		cout << player3 << ", have you thought of a word? write here: " << endl;
		cin >> word;
		iQueue3.enqueue(word);
		cout << "\nWord is recieved! Pass to the next player." << endl;
		
		// Dequeue and retrieve all the words in the queue
		
		cout << "The words in the queue are...\n" << endl;
	
		// for player 1's queue
		while (iQueue1.isEmpty())
		{
			char value[15];
			iQueue1.dequeue(value)
			cout << value << endl;
		}
		
		// for player 2's queue
		while (isQueue2.isEmpty())
		{
			char value[15];
			iQueue2.dequeue(value)
			cout << value << endl;
		}
		
		// for player 3 queue.
		while (isQueue3.isEmpty())
		{
			char value[15];
			iQueue3.dequeue(value)
			cout << value << endl;
		}
	}
	
	return 0;
}
