#ifndef FRAGCHANGECOLOR_H
#define FRAGCHANGECOLOR_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class FragChangeColor : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    FragChangeColor();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

