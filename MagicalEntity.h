#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity
{
protected:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(int mana, int power);
    int getMana() const;
    int getSpellPower() const;
};

#endif