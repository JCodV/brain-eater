#include <iostream>
#include "civilization_map.h"
#include "raylib.h"
#include "tile.h"
#include "game.h"

CivilizationMap::CivilizationMap(std::vector<std::vector<char>> map_data)
{
    this->map = read_map_data(map_data);
}

void CivilizationMap::update()
{
    // std::cout << "test";
}

void CivilizationMap::render()
{
    if (map.empty())
    {
        std::cerr << "map is empty!" << '\n';
        exit(1);
    }

    for (int i = 0; i < map.size(); i++)
    {
        for (int j = 0; j < map[i].size(); j++)
        {
            Color color;
            switch (map[i][j].type)
            {
                case TileType::UNDEFINED:
                    color = DARKGRAY;
                    break;
                case TileType::GRASS:
                    color = DARKGREEN;
                    break;
                case TileType::WATER:
                    color = BLUE;
                    break;
                case TileType::SOIL:
                    color = BROWN;
                    break;
                case TileType::CAVE_ENTRANCE:
                    color = BLACK;
                    break;
                case TileType::CIV_WALL:
                    color = ORANGE;
                    break;

            }
                DrawRectangle(i*tile_sprite_width * screen_width_scale, j*tile_sprite_height * screen_height_scale, tile_sprite_width * screen_width_scale, tile_sprite_height * screen_height_scale, color);
        }
    }
}

std::vector<std::vector<Tile>> CivilizationMap::read_map_data(const std::vector<std::vector<char>>& map_data)
{
    std::vector<std::vector<Tile>> map(10, std::vector<Tile>(20));

    for (int i = 0; i < map_data.size(); i++)
    {
        for (int j = 0; j < map_data[i].size(); j++)
        {
            TileType type;
            switch (map_data[i][j]) {
                case 'G':
                    type = TileType::GRASS;
                    break;
                case 'W':
                    type = TileType::WATER;
                    break;
                case 'S':
                    type = TileType::SOIL;
                    break;
                case '0':
                    type = TileType::CAVE_ENTRANCE;
                    break;
                case '#':
                    type = TileType::CIV_WALL;
                    break;

                map[i][j] = Tile(type);
            }
        }
    }

    return map;
}
