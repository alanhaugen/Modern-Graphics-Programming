#ifndef TUT01_H
#define TUT01_H

#include <core/x-platform/scene.h>

class Tut01 : public IScene
{
public:
    Tut01();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

