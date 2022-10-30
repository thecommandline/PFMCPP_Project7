#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(const std::string name_, int hp, int armor_) : Character(hp, armor_, 4), name(name_) 
{
    helpfulItems = makeHelpfulItems(rand()%10);
    defensiveItems = makeDefensiveItems(rand()%10);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStatsw
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
