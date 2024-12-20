#include <iostream>
#include "raylib.h"

const int screen_width = 800;
const int screen_height = 450;

int main()
{
    InitWindow(screen_width, screen_height, "Doors");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

