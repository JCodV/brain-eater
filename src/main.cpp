#include <iostream>
#include "door.h"

const float screen_width = 800;
const float screen_height = 450;

int main()
{
    InitWindow((int)screen_width, (int)screen_height, "Doors");
    SetTargetFPS(60);

    Door door(DoorPosition::MIDDLE, BROWN, 0);

    while (!WindowShouldClose())
    {
        door.update();
        BeginDrawing();
            ClearBackground(RAYWHITE);
            door.render();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

