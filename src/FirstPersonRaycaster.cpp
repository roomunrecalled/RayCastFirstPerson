#include "FirstPersonRaycaster.h"

FirstPersonRaycaster::FirstPersonRaycaster() { }
FirstPersonRaycaster::~FirstPersonRaycaster() { }

void FirstPersonRaycaster::say(String message) {
  Godot::print(message);
}
String FirstPersonRaycaster::hello(String target) {
  return String("Hello, {0}!").format(Array::make(target));
}

void FirstPersonRaycaster::draw_test() {
  owner->draw_rect(Rect2(Vector2(0,0),Vector2(30,30)),Color(0,255,0));
  Godot::print("Line drawn.");
}

void FirstPersonRaycaster::_register_methods() {
  register_method("say", &FirstPersonRaycaster::say);
  register_method("hello", &FirstPersonRaycaster::hello);
  register_method("draw_test", &FirstPersonRaycaster::draw_test);
}

