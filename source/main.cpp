#include <core/application.h>
#include "tut01-HelloTriangle/tut01.h"
#include "tut02-PlayingwithColors/tut02VertexColors.h"
#include "tut02-PlayingwithColors/tut02FragPosition.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);
    application.AddScene(new Tut01());
    application.AddScene(new Tut02());
    application.AddScene(new Tut02FragPosition());

    return application.Exec();
}

