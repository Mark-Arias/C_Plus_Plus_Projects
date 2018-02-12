// Assignemt # 4
// Mark Arias
// 7/19/17


//---------------------------------------------------------------------
#include <iostream>
#include <string>                                                           // for the string class
#include "point2D.h"                                                        // for the point2D class
#include "Point3D.h"                                                        // for the point3D class
#include <vector>

using namespace std;


void printAll(vector<point2D*> vector);




int main()
{
    //---------------------------------------------------------------------
    // Assignment # 4, problem 1
    // make a few 3D objects, and excercise their functionality
    cout << "Pixel Information: " << endl;
    point3D pixel(1,2,3);
    pixel.printLocation();
    
    cout << endl;
    cout << "Pixel 2 Information: " << endl;
    point3D pixel2 = point3D(25,25,0);
    pixel2.getZ();
    pixel2.setZ(25);
    pixel2.printLocation();
    pixel2.moveToOrigin();
    pixel2.printLocation();
    cout << endl;                                                           // Used for formatting, to create space between next section of test code
    
    //---------------------------------------------------------------------
    // Assignment # 4, problem 2
    // test color data member in the point2D class, and color inheritance properties to the point3D class
    // The string color data member of the point2D class is only available to the point3D class if I designate the data as protected rather than
    // private.  Protected designation allows subclasses to acces the otherwise private data fields of a superclass.
    cout << "Testing string color functionality:" << endl;
    point2D pixel3(25, 2, "yellow");
    pixel3.displayColor();
    pixel3.setColor("green");
    pixel3.displayColor();
    cout << endl;
    cout << "Testing Color Inheritance Properties: " << endl;
    point3D pixel4(34,34,34);
    pixel4.setColor("green");
    pixel4.displayColor();
    cout << endl;
    
    //---------------------------------------------------------------------
    // Assignment # 4, problem 3
    // make a pointer of type point2D and type point3D
    // use pointer variables to move the objects and print their locations
    cout << "Testing problem 3: Using pointers." << endl;
    point2D pixel5(0,0,"red");
    point2D * pointer1 = &pixel5;                                           // Sets the pointer to the location of the newly created object
    pointer1 -> displayColor();                                             // invoking the methods of this object via pointers
    pointer1 -> moveHorizontally(5);                                        // using a pointer to move the point by a specified amount
    pointer1 -> printLocation();                                            // using a pointer to print the location of the pointed to object
    
    cout << "Testing 3d objects" << endl;
    point3D pixel6(0,2,4);
    point3D * pointer2 = &pixel6;                                           // sets the pointer to the location of the object
    pointer2 -> setColor("green");
    pointer2 -> displayColor();
    
    //---------------------------------------------------------------------
    // Assignment # 4, problem 4, and problem 5
    // make a pointer to type Point2d point to type point3D
    pointer1 = pointer2;
    pointer1 -> printLocation();
    // so it works, but you lose variables and functionality in the subclass
    // This now works completely, and prints out all three variables, becuase I made the printLocation function
    // virtual in the definition, which allows it to be overriden by the appropriate subclass function
    // definition
    // without this behavior provided by polymorphism and the virtual declaration, the type of call above would only print out the location of
    // the x and y data fields, but not the third data field
    
    
    
    
    
    return 0;
}

//---------------------------------------------------------------------
// Assignment #4, problem 6
// Polymorphism is the fancy OOP term for a function or method that has the same name as another method, but a different signature.
// The signature is the paramter fields that a function takes to do it's work.
// The beauty of polymorhpic functions is that we can design one type of method to deal with a solution to a problem, and then
// use differing parameter fields to account for variations on that same basic problem that we solved



 
