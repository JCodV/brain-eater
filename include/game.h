#pragma once
#include "raylib.h"
#include "civilization_map.h"

const int screen_width = 320;
const int screen_height = 160;

const int target_screen_width = 1920;
const int target_screen_height = 1080;

const float screen_width_scale = (float)target_screen_width / (float)screen_width;
const float screen_height_scale = (float)target_screen_height / (float)screen_height;

class Game
{
public:
    enum class GamePhase
    {
        PREP,
        FIGHT,
    };

    int years_survived;
    int population_count;

    Game();
private:
    CivilizationMap map;
};
