#include "nsupch.h"
#include "Application.h"

#include "NSU/Events/ApplicationEvent.h"
#include "NSU/Log.h"

namespace NSU {

    Application::Application()
    {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        while (m_Running)
        {
            m_Window->OnUpdate();
        }
    }

}