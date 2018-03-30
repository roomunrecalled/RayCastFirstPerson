#include "RayCastFirstPerson.hpp"

static void RayCastFirstPerson::_register_methods() {
  register_method("draw", &RayCastFirstPerson::draw());
}