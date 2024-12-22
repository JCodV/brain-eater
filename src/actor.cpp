#include <iostream>

#include "actor.h"
#include "raymath.h"

Actor::Actor()
    : state(State::IDLE), velocity(Vector2 {50.0f, 50.0f}), target(nullptr), max_target_distance(0.0f)
{
}

Actor::Actor(Vector2 position, Vector2 velocity, std::shared_ptr<Entity> target, float max_target_distance)
    : postition(position), target(target), max_target_distance(max_target_distance)
{
}

Actor::Actor(Vector2 position, State state, Vector2 velocity, std::shared_ptr<Entity> target, float max_target_distance)
    : Entity(position), state(state), velocity(velocity), target(target), max_target_distance(max_target_distance)
{
}

void Actor::update()
{
    if (target == nullptr)
    {
        std::cerr << "ERROR: TARGET IS NULLPTR" << '\n';
        exit(1);
    }

    switch (state)
    {
        case State::IDLE:
            break;
        case State::FARMING:
            break;
        case State::FIGHTING:
            break;
    }

    if (Vector2Distance(position, target->position) < max_target_distance)
    {
        moveTowardsTarget();
    }
    
    std::cout << "after vec2dist";
}

void Actor::render()
{
    switch (state)
    {
        case State::IDLE:
            break;
        case State::FARMING:
            break;
        case State::FIGHTING:
            break;
    }
    
    DrawRectangle(position.x, position.y, width, height, RED);
}

void Actor::changeState(State new_state)
{
    this->state = new_state;
}

void Actor::changeTarget(std::shared_ptr<Entity> new_target)
{
    this->target = new_target;
}

void Actor::moveTowardsTarget()
{
    Vector2MoveTowards(velocity, target->position, max_target_distance);
    position = Vector2Add(position, velocity);
}
