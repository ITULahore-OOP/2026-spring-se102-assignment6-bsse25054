#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    // creating heroes
    Hero h1("Aragorn", 100, 50);
    Warrior w1("Gimli", 100, 40, 10);
    Knight k1("Arthur", 150, 60, 20, 25);
    Spellblade s1("MysticBlade", 90, 45, 8, 100, 35);

    // testing abilities
    cout << "Warrior Effective Health: " << w1.calculateEffectiveHealth() << endl;
    cout << "Knight Burst Damage: " << k1.calculateBurstDamage() << endl;
    cout << "Spellblade Hybrid Damage: " << s1.calculateHybridDamage() << endl;

    cout << endl;

    // creating a guild
    Guild g("Legends");

    // adding heroes to guild
    g += &h1;
    g += &w1;
    g += &k1;

    // printing guild information
    cout << g;

    cout << endl;

    // display guild statistics
    g.displayGuildStats();

    cout << endl;

    // testing operator >
    if (k1 > h1)
    {
        cout << k1.getName() << " is stronger than " << h1.getName() << endl;
    }

    // testing operator +
    cout << "Combined Vitality: " << (h1 + w1) << endl;

    return 0;
}