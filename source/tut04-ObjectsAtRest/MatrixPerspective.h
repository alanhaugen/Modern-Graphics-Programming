#ifndef MATRIXPERSPECTIVE_H
#define MATRIXPERSPECTIVE_H

#include <core/x-platform/scene.h>

class MatrixPerspective : public IScene
{
public:
    MatrixPerspective();

    void Init();
    void Update();
    void UpdateAfterPhysics();
};

#endif
