// Transform.h
// A component containing position and rotation of an entity

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Game.h"
#include "Scripting.h"

class Transform {
  public:

    // Make this component scriptable
    static void registerFunctions() {

      // Register the usual assign, has, remove functions to Entity
      Script::registerComponentToEntity<Transform>("Transform");

      // Create the Transform type
      Game::lua.new_usertype<Transform>("Transform",
        "position", &Transform::position,
        "rotation", &Transform::rotation
      );
    }

    // Constructor
    Transform(float x = 0.f, float y = 0.f, float r = 0.f)
      : position(sf::Vector2f(x, y))
      , rotation(r) {}

    sf::Vector2f position;
    float rotation;
};

#endif
