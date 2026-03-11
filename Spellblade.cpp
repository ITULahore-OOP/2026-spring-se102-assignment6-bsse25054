#include "Spellblade.h"

Spellblade::Spellblade(string name, int hp, int power, int armor, int mana, int spell)
    : Warrior(name, hp, power, armor), MagicalEntity(mana, spell)
{
}

// hybrid damage
int Spellblade::calculateHybridDamage() const
{
    return getPower() + getSpellPower();
}