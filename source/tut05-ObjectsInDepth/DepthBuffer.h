#ifndef DepthBuffer_H
#define DepthBuffer_H

#include <core/x-platform/scene.h>

class DepthBuffer : public IScene
{
public:
    DepthBuffer();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
