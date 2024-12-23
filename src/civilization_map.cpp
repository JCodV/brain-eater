#include "civilization_map.h"

// GRASS = G
// WATER = W
// SOIL = S
// CAVE = 0
// CIV_WALL = #

// 10 x 20 (160 x 320)
std::vector<std::vector<char>> starter_map_data =
{
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
    {'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G'},
};

CivilizationMap::CivilizationMap(std::vector<std::vector<char>> map_data)
    : map(read_map_data(map_data))
{
}

std::vector<std::vector<Tile>> CivilizationMap::read_map_data(const std::vector<std::vector<char>>& map_data)
{
    std::vector<std::vector<Tile>> map(10, std::vector<Tile>(20, 0));

    for (int i = 0; i < map_data.size(); i++)
    {
        for (int j = 0; j < map_data[i].size(); j++)
        {
            Tiletype type;
            switch (map_data[i][j]) {
                case 'G':
                    type = TileType::
                    break;
                case 'W':
                    
                    break;
                case 'S':
                    
                    break;
                case '0':
                    
                    break;
                case '#':
                    
                    break;
            }
        }
    }
}
