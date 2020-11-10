#include <Phosphorus.h>

class Sandbox : public Phosphorus::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox() {

    }

};


Phosphorus::Application* Phosphorus::CreateApplication() 
{
    return new Sandbox();
}