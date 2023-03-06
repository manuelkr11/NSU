#include "Application.h"

#include "NSU/Events/ApplicationEvent.h"
#include "NSU/Log.h"

namespace NSU {

    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        WindowResizeEvent e(1280, 720);
        HZ_TRACE(e);

        while (true);
    }

}