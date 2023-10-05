#pragma once

#include "Globals.h"
#include "glmath.h"

class Primitive {
   /* glColor4ub(255, 0, 0, 255);
    glBegin(GL_TRIANGLES);
    glVertex3d(-0.25, -0.25, 0);
    glVertex3d(0.25, -0.25, 0);
    glVertex3d(0, 0.75, 0);*/

    Primitive();
    ~Primitive();

    virtual void Init();
    virtual void Draw();
    virtual void CleanUp();

};

class Cube {
    
};

class Plane {

};

class Pyramid {

};

class Sphere {
    
};

class Cylinder {

};