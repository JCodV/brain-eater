#include <vector>
#include "raylib.h"
#include "tile.h"

const int max_width = GetScreenWidth() / tile_sprite_width;
const int max_height = GetScreenHeight() / tile_sprite_height;

class CivilizationMap
{
public:
    CivilizationMap(std::vector<std::vector<char>> map_data);
    
    std::vector<std::vector<Tile>> read_map_data(const std::vector<std::vector<char>>& map_data);
private:
    std::vector<std::vector<Tile>> map;
};
