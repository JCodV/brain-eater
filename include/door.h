#include "raylib.h"
#include "entity.h"

extern const float screen_width;
extern const float screen_height;

const float door_width = screen_width / 4;
const float door_height = screen_height - 100.0;
const float door_y = 100;
const float door_inner_padding = 50;

const float mid_door_x = (screen_width / 2) - (door_width / 2);
const float left_door_x = mid_door_x - door_inner_padding;
const float right_door_x = mid_door_x + door_inner_padding;

enum class DoorPosition
{
	LEFT,
	MIDDLE,
	RIGHT
};

class Door : public Entity
{
public:
	DoorPosition door_position;
	Color color;
	int seed;
	bool is_open;

	Door(DoorPosition door_position, Color color, int seed);
	virtual void update() override;
	virtual void render() override;
private:
};

class EnemyDoor : public Door
{
public:
	EnemyDoor(DoorPosition door_position, Color color, int seed);
private:
};

class LootDoor : public Door
{
public:
	LootDoor(DoorPosition door_position, Color color, int seed);
private:
};
