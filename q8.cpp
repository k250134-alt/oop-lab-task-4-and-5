/*8. An online game tracks players and their weapons.
Requirements:
• Create a Weapon class:
o weaponName
o damage
• Create a Player class:
o playerName
o health
o Weapon object inside Player (Composition)
• Use array of Player objects
• Use static int activePlayers
• Create a const function showStatus()
• When a player object is destroyed, active players should reduce
Hint: Weapon should not exist without Player.*/
#include <iostream>
using namespace std;

class Weapon
{
    string weaponName;
    int damage;

public:
    Weapon(string w, int d) : weaponName(w), damage(d) {}
    
    void show() const
    {
        cout << "Weapon: " << weaponName << ", Damage: " << damage << endl;
    }
};

class Player
{
    string playerName;
    int health;
    Weapon w;

public:
    static int activePlayers;

    Player(string name, int hp, Weapon weap) : playerName(name), health(hp), w(weap)
    {
        activePlayers++;
    }

    ~Player()
    {
        activePlayers--;
    }

    void showStatus() const
    {
        cout << "Player: " << playerName << ", Health: " << health << endl;
        w.show();
        cout << "Active Players: " << activePlayers << endl;
        cout << "----------------------" << endl;
    }
};

int Player::activePlayers = 0;

int main()
{
    Player players[3] = {
        Player("Daniya", 100, Weapon("Sword", 50)),
        Player("Ali", 120, Weapon("Bow", 40)),
        Player("Sara", 90, Weapon("Dagger", 30))
    };

    for (int i = 0; i < 3; i++)
    {
        players[i].showStatus();
    }

    return 0;
}

