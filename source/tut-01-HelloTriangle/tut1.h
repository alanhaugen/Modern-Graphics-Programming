#ifndef TUT1_H
#define TUT1_H

#include <core/x-platform/scene.h>

class Tut1 : public IScene
{
public:
    Tut1();

    void Update();
    void UpdateAfterPhysics();
}; 

#endif

