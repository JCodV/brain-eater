#include <vector>
#include <iostream>
#include "raylib.h"
#include "actor.h"

const int screen_width = 800;
const int screen_height = 450;

int main()
{
    InitWindow(screen_width, screen_height, "Civilization");
    SetTargetFPS(60);

    Vector2 velocity {50.0f, 50.0f};
    Actor target();
    std::shared_ptr<Entity> target_ptr;
    Actor actor();
    while (!WindowShouldClose())
    {
        actor.update();

        BeginDrawing();
        ClearBackground(RAYWHITE);

        actor.render();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
