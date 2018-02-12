// Interface File: point2D.h
//
// Defines class point2D
// This class is designed to model a 2D point
// it must have x and y fields
// a default constructor that puts the point at the origin
// a constructor with arguments that puts the point at a specified coordinate
// getters and setters for x and y
// create four member functions:
// moveHorizontally, moveVertically, moveToOrigin, printLocation
//
//  point2D.h
//  Point2D_Class
//
//  Created by Mark S Arias on 7/14/17.
//  Copyright © 2017 Mark  Arias. All rights reserved.
//
//-------------------------------------------------------------------
// SAFEGUARDS AND INCLUDES
#ifndef point2D_h   // avoid redeclaring class point2D
#define point2D_h   // This code is compiled only once


#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////
/////// class point2D defintion     ///////
///////////////////////////////////////////

class point2D
{
public:     // class member functions
    
//-- Constructors
    point2D();
    
    point2D(int xPosition, int yPosition);
    // creates an object from the point2D class when called like so:
    // point2D pixel1(100, 50);
    
    
//-- Modifiers
// modify the information that this class deals with
    void moveHorizontally(int xDistance);
    // move the point in the horizontal direction by however many points specified in the argument
    
    void moveVertically(int yDistance);
    // move the point in the vertical direction also by the distance specified
    
    void moveToOrigin();
    // move the points location to the origin point (0,0)
    
    // Assignment 3 # 7
    // function purpose:
    // design a function named moveTo that takes two point2D points and moves the first to the position of the second.
    // the fucntion returns nothing.
    // verify that function works by calling printLocation method
    friend void moveTo(point2D& pixel3, point2D& pixel4);
    // in addition, you need to declare a prototype of that function in the class that's data you would like to access
    // and in this class, declare that the function is a friend. By doing so, you let this function access private data.
    
    
    
    
    // Assignment 3 # 9
    // overload the operator + so that two point2D points can be added together
    //
    point2D operator + (const point2D&);
    
    
    
    
    
//-- Accesors
// access the information such as displaying data fields in this class
    void printLocation() const;
    // print the current location of this instance of the point
    
    
    
private:
    // the x and y positions of an object
    // this information will be modified and manipulated by the public
    int x;
    int y;
    
};




#endif /* point2D_h */
