#ifndef GUILD_H
#define GUILD_H

#include "Hero.h"
#include <iostream>

class Guild
{
private:
    std::string guildName;
    Hero *roster[15];
    int memberCount;

public:
    Guild(std::string name);
    ~Guild();

    int calculateTotalGuildPower() const;
    void displayGuildStats() const;

    void operator+=(Hero *newHero);

    friend std::ostream &operator<<(std::ostream &os, const Guild &g);
};

#endif