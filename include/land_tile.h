#include "raylib.h"
#include "entity.h"

class LandTile : public Entity
{
public:
    enum class TileType
    {
        GRASS,
        WATER,
        SOIL,
        CAVE_ENTRANCE,
        CIV_WALL
    };

    TileType type;
    bool is_occupied;

private:
};
