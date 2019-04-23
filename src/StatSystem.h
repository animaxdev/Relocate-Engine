// StatSystem.h
// System for transferring stats into relevant components

#ifndef STATSYSTEM_H
#define STATSYSTEM_H

#include "Game.h"
#include "Scripting.h"

#include "Stats.h"
#include "Movement.h"

// Get / Assign components and write stats
class StatSystem : public ECS::EntitySystem {
  public:

    // Register this system in the world
    static void registerStatSystem(sol::environment& env, ECS::World* world);

    // Write to appropriate components
    virtual void update(ECS::World* world, const sf::Time& dt) override;

    // Write stats to the movement component such as move speed
    void writeMovementStats(const ECS::ComponentHandle<Stats>& s, ECS::ComponentHandle<Movement>& m);

};

#endif
