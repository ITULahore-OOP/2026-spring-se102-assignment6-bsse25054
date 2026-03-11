#include "Guild.h"

Guild::Guild(std::string name)
{
    guildName = name;
    memberCount = 0;
}

// sum power of all heroes
int Guild::calculateTotalGuildPower() const
{
    int total = 0;
    for (int i = 0; i < memberCount; i++)
    {
        total += roster[i]->getPower();
    }
    return total;
}

// recruit hero
void Guild::operator+=(Hero *newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount++;
    }
    else
    {
        std::cout << "Guild is at full capacity!" << std::endl;
    }
}

// display stats
void Guild::displayGuildStats() const
{
    std::cout << "Guild Name: " << guildName << std::endl;
    std::cout << "Total Members: " << memberCount << "/15" << std::endl;
    std::cout << "Total Guild Power: " << calculateTotalGuildPower() << std::endl;
}

// print guild
std::ostream &operator<<(std::ostream &os, const Guild &g)
{
    os << "Guild: " << g.guildName << std::endl;
    os << "Members: " << g.memberCount << std::endl;

    for (int i = 0; i < g.memberCount; i++)
    {
        os << "- " << g.roster[i]->getName()
           << " (Power: " << g.roster[i]->getPower() << ")" << std::endl;
    }

    return os;
}

// destructor
Guild::~Guild()
{
    std::cout << "The guild " << guildName << " has been disbanded!" << std::endl;
}