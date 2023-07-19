#ifndef ORTHOCUBE_H
#define ORTHOCUBE_H

#include <core/x-platform/scene.h>

class OrthoCube : public IScene
{
public:
    OrthoCube();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
