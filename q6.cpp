/*6. A game server tracks total players online.
Create class Player:
• name
• static totalPlayers
• constructor increments players
• destructor decrements players
• static function showPlayers()
Test by creating objects inside a block { }.*/
#include <iostream>
using namespace std;

class Player
{
    string name;
    static int totalPlayers;
public:
    Player(string n): name(n) 
	{ 
	totalPlayers++; 
	cout << name << " joined the game." << endl; 
	}
    ~Player() 
	{ 
	cout << name << " left the game." << endl; 
	totalPlayers--; 
	}
    static void showPlayers() 
	{ 
	cout << "Total players online: " << totalPlayers << endl; 
	}
};

int Player::totalPlayers = 0;

int main()
{
    Player::showPlayers();
    {
        Player p1("Alice");
        Player p2("Bob");
        Player::showPlayers();
    }
    Player::showPlayers();
    return 0;
}


