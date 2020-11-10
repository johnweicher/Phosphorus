#pragma once

#ifdef PH_PLATFORM_WINDOWS

extern Phosphorus::Application* Phosphorus::CreateApplication();

int main(int argc, char** argv)
{
    Phosphorus::Log::Init();
    PH_CORE_WARN("Initialized Log");
    int a = 22;
    PH_INFO("Hello! Var={0}", a);

    auto app = Phosphorus::CreateApplication();
    app->run();
    delete app;
}

#endif
