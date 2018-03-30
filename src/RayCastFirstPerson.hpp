#ifndef RAYCASTFIRSTPERSON_H
#define RAYCASTFIRSTPERSON_H

#include <core/Godot.hpp>

#include <CanvasItem.hpp>

#include <TileMap.hpp>
#include <Sprite.hpp>

using namespace godot;

class RayCastFirstPerson : public GodotScript<CanvasItem> {
  GODOT_CLASS(RayCastFirstPerson)

  public:
    RayCastFirstPerson();
    ~RayCastFirstPerson();

    void _init();
    void draw(Vector2 imageSize, TileMap level, Sprite player);
    void _ready();

    static void _register_methods();
};


#endif 