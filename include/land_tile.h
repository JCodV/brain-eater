#include "raylib.h"
#include "entity.h"

const int tile_sprite_width = 16;
const int tile_sprite_length = 16;

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
