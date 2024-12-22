#include "raylib.h"
#include "entity.h"

enum class State
{
    IDLE,
    FARMING,
    FIGHTING
};

class Actor : public Entity
{
public:
    State state;
    bool is_enemy;

    Actor(State state, bool is_enemy);

    void update();
    void render();
private:
};
