#include "actor.h"

Actor::Actor(State state, bool is_enemy)
    : state(state), is_enemy(is_enemy)
{
}

void Actor::update()
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
}
