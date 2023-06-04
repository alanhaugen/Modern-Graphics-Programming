#ifndef CPUPOSITIONOFFSET_H
#define CPUPOSITIONOFFSET_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class CPUPositionOffset : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    CPUPositionOffset();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

