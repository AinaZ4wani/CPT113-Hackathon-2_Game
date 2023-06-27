#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int numPlayers;
	string player1, player2, player3;
	char key;
	
	cout << "Hi! Welcome to Chain It Long!" << endl;
	cout << "Ready to play? Press '1' to continue..." << endl;
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
		
		
		cout << "\nGreat! Let's begin the game now!" << endl;
		cout << "\nAssigning a random letter now...." << endl;
		
		unsigned seed = time(0);
		srand(seed);
		
		int randNum = 66 + rand() % 80;
		char fLetter = static_cast<char>(randNum); 
		
		cout << "\nThe first letter is... " << fLetter << "!" << endl;
		
		cout << "\nIt's " << player1 << "'s turn! Please come up with"
			 << " a word with the first letter as shown above!" << endl;
	}
	
	else 
		cout << "Come back later!" << endl;
	
	return 0;
}
