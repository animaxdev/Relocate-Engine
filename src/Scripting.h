// Scripting.h
// Functions to be called in a script

#ifndef SCRIPTING_H
#define SCRIPTING_H

#include <SFML/Graphics.hpp>
#include "Sol.h"
#include "ECS.h"

namespace Script {

  // Begin using Guile and register functions
  void startLua();

  ///////////////////////
  // TRIVIAL FUNCTIONS //
  ///////////////////////

  bool testLua();
};

#endif
