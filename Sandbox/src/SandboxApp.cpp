#include <NSU.h>

class Sandbox : public NSU::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }

};

NSU::Application* NSU::CreateApplication()
{
    return new Sandbox();
}