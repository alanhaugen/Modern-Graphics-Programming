#ifndef ASPECTRATIO_H
#define ASPECTRATIO_H

#include <core/x-platform/scene.h>

class AspectRatio : public IScene
{
public:
    AspectRatio();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
