#include "raylib.h"

class Entity
{
public:
    Vector2 position;
    float width;
    float height;

    Entity();
    Entity(Vector2 position, float width, float height);

    virtual void update();
    virtual void render();
private:
};
