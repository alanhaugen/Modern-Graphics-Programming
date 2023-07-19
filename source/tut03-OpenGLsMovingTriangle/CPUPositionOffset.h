#ifndef CPUPOSITIONOFFSET_H
#define CPUPOSITIONOFFSET_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut03CPUPositionOffset : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut03CPUPositionOffset();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

