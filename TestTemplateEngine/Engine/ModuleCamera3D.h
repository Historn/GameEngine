#pragma once
#include "Module.h"
#include "Globals.h"


class ModuleCamera3D : public Module
{
public:
	ModuleCamera3D(Application* app, bool start_enabled = true);
	~ModuleCamera3D();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();

	void Look(const glm::vec3& Position, const glm::vec3& Reference, bool RotateAroundReference = false);
	void LookAt(const glm::vec3& Spot);
	void Move(const glm::vec3& Movement);
	float* GetViewMatrix();

private:

	void CalculateViewMatrix();

public:

	glm::vec3 X, Y, Z, position, target;

private:

	glm::mat4x4 ViewMatrix, ViewMatrixInverse;
};
