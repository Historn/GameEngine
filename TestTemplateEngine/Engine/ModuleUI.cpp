#include "Application.h"
#include "ModuleUI.h"

ModuleUI::ModuleUI(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

// Destructor
ModuleUI::~ModuleUI()
{}

bool ModuleUI::Init() 
{
    LOG("Creating IMGUI context");
    bool ret = true;

    if (ret == true)
    {
        // Setup Dear ImGui context
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO(); (void)io;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
        io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;         // Enable Docking
        io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;       // Enable Multi-Viewport / Platform Windows
        //io.ConfigViewportsNoAutoMerge = true;
        //io.ConfigViewportsNoTaskBarIcon = true;

        // Setup Dear ImGui style
        ImGui::StyleColorsDark();
        //ImGui::StyleColorsLight();
    }

    return ret;
}

bool ModuleUI::Start() 
{
    LOG("Starting IMGUI");
    bool ret = true;

    return ret;
}

update_status ModuleUI::PreUpdate(float dt)
{
    return UPDATE_CONTINUE;
}

update_status ModuleUI::Update(float dt)
{
    return UPDATE_CONTINUE;
}

update_status ModuleUI::PostUpdate(float dt)
{
    return UPDATE_CONTINUE;
}

bool ModuleUI::CleanUp()
{
    LOG("Cleaning up IMGUI");
    bool ret = true;

    return ret;
}