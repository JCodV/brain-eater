#include <vector>
#include "raylib.h"
#include "actor.h"
class Civilization
{
public:

    int population;
    int warriors;
    int farmers;
    int miners;

    float hunger;

    Civilization(int starting_population);
private:
    std::vector<Actor> civ_members;
    CivilizationMap map;
};
