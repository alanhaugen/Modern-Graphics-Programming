#ifndef FRAGCHANGECOLOR_H
#define FRAGCHANGECOLOR_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut03FragChangeColor : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut03FragChangeColor();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

