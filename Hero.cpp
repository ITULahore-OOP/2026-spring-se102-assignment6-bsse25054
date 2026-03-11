#include "Hero.h"

// constructor
Hero::Hero(string name, int hp, int power)
{
    heroName = name;
    health = hp;
    basePower = power;
}

// getters
string Hero::getName() const
{
    return heroName;
}

int Hero::getHealth() const
{
    return health;
}

int Hero::getPower() const
{
    return basePower;
}

// reduce health but not below 0
void Hero::takeDamage(int damage)
{
    health -= damage;
    if (health < 0)
        health = 0;
}

// compare power
bool Hero::operator>(const Hero &other) const
{
    return basePower > other.basePower;
}

// combined vitality
int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}