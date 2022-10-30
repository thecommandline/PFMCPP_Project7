#include "Paladin.h"
#include "Utility.h"

//Paladin::Paladin
Paladin::Paladin(const std::string name_, int hp, int armor_) : Character(hp, armor_, 10), name(name_) 
{
    helpfulItems = makeHelpfulItems(rand()%10);
    defensiveItems = makeDefensiveItems(rand()%10);
}

//Paladin::getName

const std::string& Paladin::getName()
{
    return name;
}

//Paladin::getStatsw

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
