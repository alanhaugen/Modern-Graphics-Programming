#ifndef SHADERPERSPECTIVE_H
#define SHADERPERSPECTIVE_H

#include <core/x-platform/scene.h>

class ShaderPerspective : public IScene
{
public:
    ShaderPerspective();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
