//-------------------------------------------------------------------
// Implementation File: 

#include <iostream>
#include <string>
#include "Point3D.h"
#include "point2D.h"
using namespace std;



//-- Constructors

// this is the default constructor for this class
// which means that if no information is provided, the objects defaults to this info on creation
point3D::point3D()
{
    x = 0;
    y = 0;
    z = 0;
}

point3D::point3D(int xPosition, int yPosition, int zPosition)
{
    x = xPosition;
    y = yPosition;
    z = zPosition;
}

//- Modifiers
void point3D::setZ(int zPosition)
{
    z = zPosition;
}

void point3D::moveAlongZ(int zPosition)
{
    z = z + zPosition;
}

void point3D::moveToOrigin()
{
    x = 0;
    y = 0;
    z = 0;
}


//-- Accessors
void point3D::getZ()
{
    cout << "Z position: " << z << endl;
}

void point3D::printLocation() const
{
    cout << "X Position: " << x << endl;
    cout << "Y Position: " << y << endl;
    cout << "Z Position: " << z << endl;
}
