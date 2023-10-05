#pragma once

#include "Globals.h"


enum PrimitivType {
    PLANE,
    CUBE,
    SPHERE,
    PYRAMID,
    CYLINDER
};

/*Maybe change class name to Mesh for better understanding*/
class Primitive {
   /* glColor4ub(255, 0, 0, 255);
    glBegin(GL_TRIANGLES);
    glVertex3d(-0.25, -0.25, 0);
    glVertex3d(0.25, -0.25, 0);
    glVertex3d(0, 0.75, 0);*/
public:
    Primitive();

    virtual void Init();
    virtual void Draw();
    virtual void CleanUp();

private:

};

class Plane {
public:

    Plane();

    void Init();
    void Draw();
    void CleanUp();

public:

    glm::vec3 postion;
    glm::vec3 rotation;
    glm::vec3 scale;
};

class Cube {
    Cube();

    void Init();
    void Draw();
    void CleanUp();
};

class Pyramid {
    Pyramid();

    void Init();
    void Draw();
    void CleanUp();
};

class Sphere {
    Sphere();

    void Init();
    void Draw();
    void CleanUp();
};

class Cylinder {

};