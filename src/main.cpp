#include <vector>
#include <iostream>
#include "raylib.h"
#include "raymath.h"
#include "actor.h"

const int screen_width = 800;
const int screen_height = 450;

int main()
{
    InitWindow(screen_width, screen_height, "Civilization");
    SetTargetFPS(60);

    Vector2 velocity{50.0f, 50.0f};
    Vector2 target_position{screen_width/2.0, screen_height/2.0};
    Entity target(target_position);
    std::shared_ptr<Entity> target_ptr = std::make_shared<Entity>(target);
    float max_dist = 50.0f;
    float speed = 50.0f;

    Actor actor(Vector2 {30.0f, 30.0f}, velocity, speed, target_ptr, max_dist);
    while (!WindowShouldClose())
    {
        target.update();
        actor.update();

        BeginDrawing();
        ClearBackground(RAYWHITE);

        target.render();
        actor.render();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
