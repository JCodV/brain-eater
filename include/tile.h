#include "raylib.h"
#include "entity.h"

const int tile_sprite_width = 16;
const int tile_sprite_height = 16;

class Tile : public Entity
{
public:
    enum class TileType
    {
        UNDEFINED,
        GRASS,
        WATER,
        SOIL,
        CAVE_ENTRANCE,
        CIV_WALL
    };

    TileType type;
    bool is_occupied;
    bool is_destructable;

    Tile();
    Tile(TileType type);

private:
};
