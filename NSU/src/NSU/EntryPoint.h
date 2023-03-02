#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern NSU::Application* NSU::CreateApplication();

int main(int argc, char** argv)
{
    auto app = NSU::CreateApplication();
    app->Run();
    delete app;
}

#endif
