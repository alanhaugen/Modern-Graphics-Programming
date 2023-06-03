#ifndef TUT02_H
#define TUT02_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut02 : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut02();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

