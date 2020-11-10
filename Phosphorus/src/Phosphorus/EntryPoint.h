#pragma once

#ifdef PH_PLATFORM_WINDOWS

extern Phosphorus::Application* Phosphorus::CreateApplication();

int main(int argc, char** argv)
{
    printf("Phosphorus Engine");
    auto app = Phosphorus::CreateApplication();
    app->run();
    delete app;
}

#endif
