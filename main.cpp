#include "DynamicQueue.h"
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

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
		
		cout << "\nAssigning a random letter now...." << endl;
		
		unsigned seed = time(0);
		srand(seed);
		
		int randNum = (rand() % (90 - 65 + 1)) + 65;
		char fLetter = static_cast<char>(randNum); 
	
		cout << "\nThe first letter is... " << fLetter << "!" << endl;
		
		cout << "\nIt's " << player1 << "'s turn! Please come up with"
			 << " a word with the first letter as shown above!\n" << endl;
	}
	
	else 
	{
		cout << "Come back later!" << endl;	
	}
	
	// create 3 DynamicQueue objects
	DynamicQueue iQueue1; // To store Player 1's list of words
	DynamicQueue iQueue2; // To store Player 2's list of words
	DynamicQueue iQueue3; // To store Player 3's list of words
	
	
	// Start Round 1
	cout << "******************************   ROUND 1    ***********************************\n\n";
	
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
		
	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();	
	cout << "\nRecieved! Word is stored in the queue." << endl;
		
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
		
	cout << "\nRound 1 has finished!" << endl;
	cout << "\nNow, get ready for Round 2!" << endl;
	
	// Start Round 2
		
	cout << "\n******************************   ROUND 2    ***********************************\n\n";
	
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;

	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
	
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;

	// Start Round 3	
	cout << "\nRound 2 has finished!" << endl;
	cout << "\nNow, get ready for Round 3!" << endl;
	
	cout << "\n******************************   ROUND 3    ***********************************\n\n";
		
	cout << player1 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue1.enqueue(word);
	wordCount1 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
	
	cout << endl;
	cout << player2 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue2.enqueue(word);
	wordCount2 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
		
	cout << endl;
	cout << player3 << ", have you thought of a word? Write here: " << endl;
	cin >> word;
	iQueue3.enqueue(word);
	wordCount3 += word.length();
	cout << "\nRecieved! Word is stored in the queue." << endl;
	
	cout << "\nRound 3 has finished!" << endl;
	
	while (!iQueue1.isEmpty()) // Dequeue player 1's queue and retrieve all the words
	{
		cout << "\nPlayer 1 words in the queue were..." << endl;
		iQueue1.dequeue(&word);
		cout << word << endl;
	}
	
	while (!iQueue2.isEmpty()) // Dequeue player 2's queue and retrieve all the words
	{
		cout << "\nPlayer 3 words in the queue were..." << endl;
		iQueue2.dequeue(&word);
		cout << word << endl;
	}
	
	while (!iQueue3.isEmpty()) // Dequeue player 3's queue and retrieve all the words
	{
		cout << "\nPlayer 3 words in the queue were..." << endl;
		iQueue3.dequeue(&word);
		cout << word << endl;
	}
	
	
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
