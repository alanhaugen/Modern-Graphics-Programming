#ifndef VERTPOSITIONOFFSET_H
#define VERTPOSITIONOFFSET_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class VertPositionOffset : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    VertPositionOffset();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

