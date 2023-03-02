#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern NSU::Application* NSU::CreateApplication();

int main(int argc, char** argv)
{
    NSU::Log::Init();
    HZ_CORE_WARN("Initialized Log!");
    int a = 5;
    HZ_INFO("Hello! Var={0}", a);

    auto app = NSU::CreateApplication();
    app->Run();
    delete app;
}

#endif