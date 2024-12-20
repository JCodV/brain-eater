#include "entity.h"
#include "raymath.h"
Entity::Entity()
    : position(Vector2Zeros), width(50.0), height(50.0)
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
