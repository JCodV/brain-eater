#include "raylib.h"
#include "entity.h"

extern const int screen_width;
extern const int screen_height;

const int door_width = screen_width / 4;
const int door_height = screen_height - 100;
const int door_y = 100;
const int door_inner_padding = 50;

const int mid_door_x = (screen_width / 2) - (door_width / 2);
const int left_door_x = mid_door_x - door_inner_padding;
const int right_door_x = mid_door_x + door_inner_padding;

enum class DoorPosition
{
	LEFT,
	MIDDLE,
	RIGHT
};

class Door : public Entity
{
public:
	DoorPosition door_positon;
	int seed;

	Door(DoorPosition door_position, int seed);
private:
};

class EnemyDoor : public Door
{
public:
	EnemyDoor(DoorPosition door_position, int seed);
private:
};

class LootDoor : public Door
{
public:
private:
};
