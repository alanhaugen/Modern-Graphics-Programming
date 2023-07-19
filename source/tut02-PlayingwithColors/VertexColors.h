#ifndef TUT02VERTEXCOLORS_H
#define TUT02VERTEXCOLORS_H

#include <core/x-platform/scene.h>
#include <core/components/camera.h>
#include <core/components/text.h>

class Tut02VertexColors : public IScene
{
private:
    Camera *camera;
    IDrawable *triangle;
    Text *description;

public:
    Tut02VertexColors();

    void Init();
    void Update();
    void UpdateAfterPhysics();
}; 

#endif

