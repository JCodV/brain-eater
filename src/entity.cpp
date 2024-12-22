#include "entity.h"
#include "raymath.h"
Entity::Entity()
    : position(Vector2Zeros), width(default_width), height(default_height)
{
}

Entity::Entity(Vector2 position)
    : position(position), width(default_width), height(default_height)
{
}

Entity::Entity(Vector2 position, float width, float height)
    : position(position), width(width), height(height)
{
}

void Entity::update()
{
}

void Entity::render()
{
    DrawRectangle(position.x, position.y, width, height, RED);
}
