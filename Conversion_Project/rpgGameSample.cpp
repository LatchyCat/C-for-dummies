
//! Basic Steps:
//? Player and Enemy Classes:
//* Define a Character class to represent both the player and the enemy. This class will handle attributes like health, attack power, and experience points.

//? Gameplay Logic:
//* Implement a battle system where the player and an enemy take turns attacking each other.
//* Track experience points and allow the player to level up when enough experience is gained.

//? Main Game Loop:
//* Continuously allow the player to battle new enemies until they quit or die.

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// Base class for characters
class Character {
public:
    string name;
    int health;
    int attackPower;

    Character(string n, int h, int ap) : name(n), health(h), attackPower(ap) {}

    bool isAlive() {
        return health > 0;
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) {
            health = 0;
        }
    }
};

// Player class that inherits from Character
class Player : public Character {
public:
    int experience;
    int level;

    Player(string n) : Character(n, 100, 20), experience(0), level(1) {}

    void levelUp() {
        if (experience >= 100) {
            level++;
            experience = 0;
            health = 100;  // Restore health upon leveling up
            attackPower += 5;  // Increase attack power
            cout << name << " leveled up! Now at level " << level << " with more power!" << endl;
        }
    }

    void gainExperience(int exp) {
        experience += exp;
        cout << name << " gained " << exp << " experience points." << endl;
        levelUp();
    }
};

// Enemy class that also inherits from Character
class Enemy : public Character {
public:
    Enemy(string n, int h, int ap) : Character(n, h, ap) {}

    static Enemy generateRandomEnemy() {
        int randomHealth = rand() % 50 + 50;  // Random health between 50 and 100
        int randomAttack = rand() % 10 + 10;  // Random attack power between 10 and 20
        return Enemy("Enemy", randomHealth, randomAttack);
    }
};

// Game logic for battles
void battle(Player &player, Enemy &enemy) {
    cout << "A wild " << enemy.name << " appears with " << enemy.health << " health!" << endl;

    while (player.isAlive() && enemy.isAlive()) {
        // Player's turn to attack
        cout << player.name << " attacks the " << enemy.name << " for " << player.attackPower << " damage!" << endl;
        enemy.takeDamage(player.attackPower);

        if (!enemy.isAlive()) {
            cout << "You defeated the " << enemy.name << "!" << endl;
            player.gainExperience(50);  // Gain experience after defeating the enemy
            return;
        }

        // Enemy's turn to attack
        cout << enemy.name << " attacks " << player.name << " for " << enemy.attackPower << " damage!" << endl;
        player.takeDamage(enemy.attackPower);

        if (!player.isAlive()) {
            cout << "You have been defeated!" << endl;
            return;
        }

        // Display health status
        cout << player.name << " Health: " << player.health << " | " << enemy.name << " Health: " << enemy.health << endl;
    }
}

// Main game loop
int main() {
    srand(time(0));  // Seed for random number generator

    cout << "Enter your character's name: ";
    string playerName;
    cin >> playerName;

    Player player(playerName);

    cout << "Welcome, " << player.name << "! Let the adventure begin!" << endl;

    while (player.isAlive()) {
        cout << "What would you like to do? (1) Battle an enemy, (2) Quit: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            Enemy enemy = Enemy::generateRandomEnemy();
            battle(player, enemy);
        } else if (choice == 2) {
            cout << "Goodbye, brave adventurer!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    if (!player.isAlive()) {
        cout << "Game Over! You have fallen in battle." << endl;
    }

    return 0;
}
