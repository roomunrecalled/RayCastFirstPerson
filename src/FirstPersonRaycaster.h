#include <core/Godot.hpp>
#include <Node2D.hpp>

#include <core/String.hpp>
#include <core/Array.hpp>

using namespace godot;

class FirstPersonRaycaster : public GodotScript<Node2D> {
    GODOT_CLASS(FirstPersonRaycaster);

  public:
    FirstPersonRaycaster();
    ~FirstPersonRaycaster();

    void say(String); 
    String hello(String);

    void draw_test();

  static void _register_methods();
};
