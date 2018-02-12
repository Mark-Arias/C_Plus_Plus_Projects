//-----------------------------------------------------------------------
//  Assignment 3 # 2
//  studentStructure.cpp
//  
//
//  Created by Mark S Arias on 7/14/17.
//
// Program Purpose:
// create a structure that represents a student
// include name, school, student id, and grade fields
// create a few instances of students all with the grade '-' and then modify that data field
// to give them all A's
//
//-----------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------



struct student
{
    
    string name = " ";
    string school = " ";
    int studentID = 1111;
    char grade = '-';
    
};

// function prototype
void printStructure(student name);




//-----------------------------------------------------------------------

int main()
{
    // create a few instances of the student structure
    student charlie;
    student rick;
    student lisa;
    student emilie;
    
    // calling print stucture to see what defualt values populate these structures
    printStructure(lisa);
    
    
    // modifying the content of individual instances of my structs
    charlie.name = "charlie";
    charlie.school = "Pacific Palisades";
    charlie.studentID = 1398224;
    charlie.grade = 'A';
    
    rick.grade = 'A';
    lisa.grade = 'A';
    emilie.grade = 'A';
    
    
    // print out structures now that they have been modified
    printStructure(charlie);
    printStructure(rick);
    printStructure(lisa);
    printStructure(emilie);

    
    
    return 0;
}

//-----------------------------------------------------------------------
// function definition
void printStructure(student name)
{
    cout << name.name << endl;
    cout << name.school << endl;
    cout << name.studentID << endl;
    cout << name.grade << endl;
}



// Assignment 3 # 3

// Explain the benefits of using structures over primitive data types
// The most poweful advantage of structures of primitive data types is that structs are a comination of the
// primitive data types in one new compound type defined by us the programmer to better model the situation
// under consideration. In being able to more accurately model the problem under consideration, we can
// reduce the amount of code we need and the effort expended in maintaining it.
// In using compound data types like this struct, we can add significantly more power to out programs than
// we ever could have in sticking with working with primitive data seperatly rather than in unison like we can
// now accomplish.





