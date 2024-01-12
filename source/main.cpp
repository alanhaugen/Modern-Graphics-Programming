#include <core/application.h>

#include "tut01-HelloTriangle/tut01.h"

#include "tut02-PlayingwithColors/FragPosition.h"
#include "tut02-PlayingwithColors/VertexColors.h"

#include "tut03-OpenGLsMovingTriangle/CPUPositionOffset.h"
#include "tut03-OpenGLsMovingTriangle/FragChangeColor.h"
#include "tut03-OpenGLsMovingTriangle/VertCalcOffset.h"
#include "tut03-OpenGLsMovingTriangle/VertPositionOffset.h"

#include "tut04-ObjectsAtRest/AspectRatio.h"
#include "tut04-ObjectsAtRest/MatrixPerspective.h"
#include "tut04-ObjectsAtRest/OrthoCube.h"
#include "tut04-ObjectsAtRest/ShaderPerspective.h"

#include "tut05-ObjectsInDepth/BaseVertexOverlap.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);

    application.AddScene(new Tut01());

    application.AddScene(new Tut02FragPosition());
    application.AddScene(new Tut02VertexColors());

    application.AddScene(new Tut03CPUPositionOffset());
    application.AddScene(new Tut03FragChangeColor());
    application.AddScene(new Tut03VertCalcOffset());
    application.AddScene(new Tut03VertPositionOffset());

    return application.Exec();
}

