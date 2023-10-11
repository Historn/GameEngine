#include "Application.h"
#include "ModuleCamera3D.h"

#include <glm/ext/matrix_transform.hpp>

ModuleCamera3D::ModuleCamera3D(Application* app, bool start_enabled) : Module(app, start_enabled) 
{
	/*fov = 60;
	aspect = (SCREEN_WIDTH / SCREEN_HEIGHT);
	zNear = 0.1;
	zFar = 100;
	eye = { 5, 2, 5 };
	center = { 0, 1, 0 };
	up = { 0, 1, 0 };*/
}

ModuleCamera3D::~ModuleCamera3D()
{

}

bool ModuleCamera3D::Init() 
{
	return true;
}

bool ModuleCamera3D::Start() 
{
	return true;
}

update_status ModuleCamera3D::Update(float dt)
{
	return UPDATE_CONTINUE;
}

bool ModuleCamera3D::CleanUp()
{
	return true;
}

glm::dmat4 ModuleCamera3D::computeLookAt() const {
	return glm::lookAt(eye, center, up);
}