//  Program Purpose:
//  This main file demonstrates how to make use of existing designed classes
//  Use of the point2D class as per the interface file description of the methods possible
//  for more information on ways to use this class, see the interface file point2D.h
//  for more information on what is under the hood, see the implementation file point2D.cpp
//  main.cpp
//  Point2D_Class
//
//  Created by Mark S Arias on 7/14/17.
//  Copyright © 2017 Mark  Arias. All rights reserved.
//

#include <iostream>                         // to access the ability to std::cout
#include <string>                           // for the string class
#include "point2D.h"                        // for the point2D class

using namespace std;                        // supports cout

int main()
{
    cout << endl << endl << "\t\tWelcome to the Point Setter Application" << endl;
    cout << "This program will create some coordinate points for you, and will even manipulate them." << endl;
    
    // this code demonstrates the defualt constructor in action
    point2D pixel1;
    pixel1.printLocation();
    
    // this code demonstrates the constructor in action
    point2D pixel2(100,100);
    pixel2.printLocation();
    
    // this code demonstrates using modifier methods
    pixel2.moveToOrigin();
    pixel2.printLocation();
    pixel2.moveHorizontally(333);
    pixel2.printLocation();
    
    
    // this code will test the moveTo method
    point2D pixel3;
    pixel3.moveHorizontally(300);
    pixel3.moveVertically(150);
    
    point2D pixel4(100,100);
    
    
    moveTo(pixel3, pixel4);
    cout << "The location of this pixel" << endl;
    pixel3.printLocation();
    
    
    // Assignment 3 # 8
    // Create an array to store 10 point2D points.
    // set the coordinate fields to be 0,0 to 9,9
    // move all the points left 5 units
    // move all the points up 10 units
    // print out their new location
    point2D pixelArray[10];
    // show what the defualt location is for the first created element in this array
    cout << "The location of the first object in the array:" << endl;
    pixelArray[0].printLocation();
    cout << "The location of the 5th element object in the array:" << endl;
    pixelArray[5].printLocation();
    
    // this for loop will be used to set the locations of the points to increment from 0 to 9
    for(int i = 0; i < 10; i++)
    {
        pixelArray[i].moveHorizontally(i);
        pixelArray[i].moveVertically(i);
    }
    cout << "The location of the first object in the array:" << endl;
    pixelArray[0].printLocation();
    cout << "The location of the 5th element object in the array:" << endl;
    pixelArray[5].printLocation();
    
    // this next loop will be used to move points left 5 units, and up 10 units
    // it will also print out their new location
    cout << "These next elements have been shifted" << endl;
    for(int i = 0; i < 10; i++)
    {
        pixelArray[i].moveHorizontally(-5);
        pixelArray[i].moveVertically(10);
        pixelArray[i].printLocation();
    }
    
    
    
    // This next block of code will be used to test that the overloaded operator + is performing as specified
    point2D foo(3,3);
    point2D bar(3,3);
    point2D result;
    result = foo + bar;
    cout << "The result of combining foo and bar is the following: " << endl;
    result.printLocation();
    
    
    
    
    return 0;
}


// Assignment 3 # 6
// The primary distinction between classes and structures is that class methods are private by default, whereas a structure's methods are
// public by defualt. This distinction is a legacy of c and c++. The difference goes to the heart of OOP. The private nature of class design lends itself
// to data hiding and encapsulation which are central to object and class design. Aside from this distinction, structs and classes are otherwise fundamentally
// similar.


