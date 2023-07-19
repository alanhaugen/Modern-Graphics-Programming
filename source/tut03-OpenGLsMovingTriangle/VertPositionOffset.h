#ifndef VERTPOSITIONOFFSET_H
#define VERTPOSITIONOFFSET_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut03VertPositionOffset : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut03VertPositionOffset();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

