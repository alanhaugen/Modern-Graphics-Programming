#ifndef BASEVERTEXOVERLAP_H
#define BASEVERTEXOVERLAP_H

#include <core/x-platform/scene.h>

class BaseVertexOverlap : public IScene
{
public:
    BaseVertexOverlap();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
