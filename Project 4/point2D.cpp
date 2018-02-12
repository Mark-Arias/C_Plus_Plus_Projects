//--------------------------------------------------------------------
// Implementation File:
// Implements the class point2D member functions
//--------------------------------------------------------------------
#include "point2D.h"    // allows for seperate compilation
#include <iostream>
//#include <string>

using namespace std;

//-- Constructors

// this is the default constructor for this class
// which means that if no information is provided, the objects defaults to this info on creation
point2D::point2D()
{
    x = 0;
    y = 0;
}

point2D::point2D(int xPosition, int yPosition, string colorInput)
{
    x = xPosition;
    y = yPosition;
    color = colorInput;
}


//-- Modifiers
void point2D::moveHorizontally(int xDistance)
{
    x = x + xDistance;
}

void point2D::moveVertically(int yDistance)
{
    y = y + yDistance;
}

void point2D::moveToOrigin()
{
    x = 0;
    y = 0;
}


// This function passes into two object references of type point2D
// In using pass by reference, this function can access and modify the data members of the original objects
void moveTo(point2D& pixel3, point2D& pixel4)
{
    pixel3.x = pixel4.x;
    pixel3.y = pixel4.y;
    
}

// this is the code that implements overloading the functionality of the + operator for this class
// so that addition of our class objects means something to the compiler.

point2D point2D::operator + (const point2D& paramter)
{
    point2D temp;
    temp.x = x + paramter.x;
    temp.y = y + paramter.y;
    
    
    
    return temp;
}

void point2D::setColor(string colorInput)
{
    color = colorInput;
}

//-- Accessors

 void point2D::printLocation() const
{
    cout << "X Position: " << x << endl;
    cout << "Y Position: " << y << endl;
}

void point2D::displayColor()
{
    cout << "Current Point Color: " << color << endl;
}











