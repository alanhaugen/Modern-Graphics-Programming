#ifndef TUT02FRAGPOSITION_H
#define TUT02FRAGPOSITION_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut02FragPosition : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut02FragPosition();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

