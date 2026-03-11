#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(int mana, int power)
{
    manaPool = mana;
    spellPower = power;
}

int MagicalEntity::getMana() const
{
    return manaPool;
}

int MagicalEntity::getSpellPower() const
{
    return spellPower;
}