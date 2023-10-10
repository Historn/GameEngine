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

/*Should take object rotation*/
static void drawAxis() {
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(0.5, 0, 0);
    glColor3ub(0, 255, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0.5, 0);
    glColor3ub(0, 0, 1);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, 0.5);
    glEnd();
}

/*Add bool to render or not, change size, etc.*/
static void drawGrid(int grid_size, int grid_step) {
    glLineWidth(1.0);
    glColor3ub(128, 128, 128);

    glBegin(GL_LINES);
    for (int i = -grid_size; i <= grid_size; i += grid_step) {
        //XY plane
        glVertex2i(i, -grid_size);
        glVertex2i(i, grid_size);
        glVertex2i(-grid_size, i);
        glVertex2i(grid_size, i);

        //XZ plane
        glVertex3i(i, 0, -grid_size);
        glVertex3i(i, 0, grid_size);
        glVertex3i(-grid_size, 0, i);
        glVertex3i(grid_size, 0, i);
    }
    glEnd();
}

class Grid {
public:

    Grid();

    void Init();
    void Draw();
    void CleanUp();

public:

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
    Cylinder();

    void Init();
    void Draw();
    void CleanUp();
};