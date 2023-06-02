#include <core/application.h>
#include "tut01-HelloTriangle/tut01.h"

int main(int argc, char **argv)
{
    Application application(argc, argv);
    application.AddScene(new Tut01());

    return application.Exec();
}

