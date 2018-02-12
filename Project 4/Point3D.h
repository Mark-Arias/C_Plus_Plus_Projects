// Interface File: Point3D 
// Project Specifications:
// make a class point3D which inherets from point2D
// new class has z coordinate data field
// two constructors
// a defualt constructor, and one with three data fields for instantiation
// Member Functions: getZ, setZ, moveAlongZ
// override moveToOrigin, and printLocation to work for the 3D points

//-------------------------------------------------------------------
// SAFEGUARDS AND INCLUDES
#ifndef Point3D_h
#define Point3D_h

#include "point2D.h"
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////
/////// class point3D defintion     ///////
///////////////////////////////////////////
//-------------------------------------------------------------------

class point3D : public point2D          // class point3D will inherit core functionality from the point2D superclass
{
    
protected:
    int z;
    
    
public:
    
//-- Constructors
    point3D();                                                      // Defualt constructor
    point3D(int xPosition, int yPosition, int zPosition);           // Constructor
    
    
//-- Modifiers
// modify the information that this class deals with
   
    void setZ(int zPosition);                                       // Sets the z position of the object
    void moveAlongZ(int zPosition);                                 // Moves the object by an inputted amount along the z axis
    void moveToOrigin();                                            // moves an object back to the origin coordinate
                                                                    // overriding the definition of this func from the superclass
    

//-- Accessors
    void getZ();                                                    // returns the z Position of the object
    void printLocation() const;                                     // overriding the base class definition of this function
                                                                    // When calling this function, compiler looks at this definition for the subclass
    
};

//-------------------------------------------------------------------
#endif /* Point3D_h */
