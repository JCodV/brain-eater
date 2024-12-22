#include "raylib.h"

const float default_width = 50.0f;
const float default_height = 50.0f;

class Entity
{
public:
    Vector2 position;
    float width;
    float height;

    Entity();
    Entity(Vector2 position);
    Entity(Vector2 position, float width, float height);

    virtual void update();
    virtual void render();
private:
};
