#ifndef VERTCALCOFFSET_H
#define VERTCALCOFFSET_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class VerticalCalcOffset : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    VerticalCalcOffset();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

