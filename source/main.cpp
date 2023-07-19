#include <core/application.h>
#include "tut01-HelloTriangle/tut01.h"
#include "tut02-PlayingwithColors/tut02VertexColors.h"
#include "tut02-PlayingwithColors/tut02FragPosition.h"
#include "tut03-OpenGLsMovingTriangle/CPUPositionOffset.h"
#include "tut03-OpenGLsMovingTriangle/FragChangeColor.h"
#include "tut03-OpenGLsMovingTriangle/VertCalcOffset.h"
#include "tut03-OpenGLsMovingTriangle/VertPositionOffset.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);
    application.AddScene(new Tut01());
    application.AddScene(new Tut02FragPosition());
    application.AddScene(new Tut02());
    application.AddScene(new Tut03CPUPositionOffset());
    application.AddScene(new Tut03FragChangeColor());
    application.AddScene(new Tut03VertCalcOffset());
    application.AddScene(new Tut03VertPositionOffset());

    return application.Exec();
}

