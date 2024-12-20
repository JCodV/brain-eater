#include "door.h"

Door::Door(DoorPosition door_position, Color color, int seed)
    : door_position(door_position), color(color), seed(seed), is_open(false)
{
    switch (door_position)
    {
        case DoorPosition::LEFT:
            position = { left_door_x, door_y };
            break;
        case DoorPosition::MIDDLE:
            position = { mid_door_x, door_y };
            break;
        case DoorPosition::RIGHT:
            position = { right_door_x, door_y };
            break;
    }
}

void Door::update()
{
}

void Door::render()
{
    DrawRectangle(position.x, position.y, width, height, color);
}

EnemyDoor::EnemyDoor(DoorPosition door_position, Color color, int seed)
    : Door(door_position, color, seed)
{
}

LootDoor::LootDoor(DoorPosition door_position, Color color, int seed)
    : Door(door_position, color, seed)
{
}
