#include <memory>

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
    Vector2 velocity;
    float speed;

    Actor();
    Actor(Vector2 position, Vector2 velocity, float speed, std::shared_ptr<Entity> target, float max_target_distance);
    Actor(Vector2 position, State state, Vector2 velocity, float speed, std::shared_ptr<Entity> target, float max_target_distance);

    void update();
    void render();

    void changeState(State state);
    void changeTarget(std::shared_ptr<Entity> new_target);
private:
    std::shared_ptr<Entity> target;
    float max_target_distance;

    void moveTowardsTarget();
};
