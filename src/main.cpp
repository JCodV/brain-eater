#include <vector>
#include <iostream>
#include "door.h"

const float screen_width = 800;
const float screen_height = 450;

int main()
{
    InitWindow((int)screen_width, (int)screen_height, "Doors");
    SetTargetFPS(60);
    
    std::vector<Door> doors;
    doors.push_back(Door(DoorPosition::MIDDLE, BROWN, 0));
    doors.push_back(Door(DoorPosition::LEFT, BROWN, 0));
    doors.push_back(Door(DoorPosition::RIGHT, BROWN, 0));

    while (!WindowShouldClose())
    {
        for (Door d : doors)
            d.update();
        BeginDrawing();
            ClearBackground(RAYWHITE);
            
            for (Door d : doors)
                d.render();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

