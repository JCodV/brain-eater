#include "tile.h"

Tile::Tile()
    : type(TileType::UNDEFINED), is_occupied(true), is_destructable(false)
{
}

Tile::Tile(TileType type)
    : type(type)
{
    switch (type)
    {
        case TileType::UNDEFINED:
            is_occupied = true;
            is_destructable = false;
            break;
        case TileType::GRASS:
            is_occupied = false;
            is_destructable = true;
            break;
        case TileType::WATER:
            is_occupied = true;
            is_destructable = false;
            break;
        case TileType::SOIL:
            is_occupied = false;
            is_destructable = true;
            break;
        case TileType::CAVE_ENTRANCE:
            is_occupied = false;
            is_destructable = false;
            break;
        case TileType::CIV_WALL:
            is_occupied = true;
            is_destructable = true;
            break;
    }
}
