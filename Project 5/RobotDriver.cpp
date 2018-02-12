//-------------------------------------------------------------------
// Implementation File:

#include "RobotDriver.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//-------------------------------------------------------------------
/*
 * Point class implementation
 */

Point::Point()                                                          // default constructor for this object
{                                                                       // initializes every data field to zero
	xPos = yPos = 0;
}

Point::Point(int x, int y)                                              // constructor for this class
{                                                                       // initializes the Point to the specified amount
	if (x < 0 || x > 99)                                                // these conditionals test to see if the point entered
    {                                                                   // is within the desired constraining range
		x = 0;                                                          // if both the conditionals on either side of the or are false, then
	}                                                                   // the construct does not fire, and the user inputted value is used to set the value
	if (y < 0 || y > 99)
    {
			y = 0;
	}
	xPos = x;
	yPos = y;
}

int Point::getX()                                                       // These methods return x and y Position when called
{
	return xPos;
}

int Point::getY()
{
	return yPos;
}

//-------------------------------------------------------------------
/*
 * Robot class implementation
 */

//-------------------------------------------------------------------
// component operational
Robot::Robot(string name)                                           // defualt constructor for a Robot
{
	this->name = name;                                              // self referencing class pointer this used in this context with the arrow
	currentPosition = Point(0, 0);                                  // brings the name data field of the object into scope here so that we
	destinationPosition = Point(0, 0);                              // can assign it to the user entered value.
	energyLevel = 100;                                              // the rest of these calls set the robot to defualt values, such as seting current
	task = "none";                                                  // and destination locations to zero, energy level to 100, and task to none
}

//-------------------------------------------------------------------
// component operational
Robot::Robot(string name, int x, int y)                             // constructor for a robot, sets the starting location
{
    this -> name = name;
    currentPosition = Point(x, y);
    destinationPosition = Point(0, 0);
    energyLevel = 100;
    task = "none";
}

//-------------------------------------------------------------------
// component operational
// Get the robot name
string Robot::getName()
{
    return name;
}

//-------------------------------------------------------------------
// component operational
// Get the x position
int Robot::getPosX()
{
    
    return currentPosition.getX();
}

//-------------------------------------------------------------------
// component operational
// Get the y position
int Robot::getPosY()
{
    return currentPosition.getY();
}

//-------------------------------------------------------------------
// component operational
// Get the current energy level
int Robot::getEnergyLevel()
{
    return energyLevel;
}

//-------------------------------------------------------------------
// component operational
// Increment the energy level by the given energy amount
void Robot::charge(int energyUnits)
{
    energyLevel = energyLevel + energyUnits;
}

//-------------------------------------------------------------------
// Set the destination where the task needs to be executed
void Robot::setDestination(int x, int y)
{
    int xDestination = x;                               // assign the passed in x and y values to local variables
    int yDestination = y;
    destinationPosition = Point(xDestination, yDestination);
}

//-------------------------------------------------------------------
// component operational
// Get the x coord of the destination
int Robot::getDestX()
{
    int xTemp;
    xTemp = destinationPosition.getX();
    return xTemp;
}

//-------------------------------------------------------------------
// component operational
// Get the y coord of the destination
int Robot::getDestY()
{
    int yTemp;
    yTemp = destinationPosition.getY();
    return yTemp;
}

//-------------------------------------------------------------------
// component operational
// Set the task description
void Robot::setTask(string requestedTask)
{
    task = requestedTask;
}

//-------------------------------------------------------------------
// component operational
// Get the task description
string Robot::getTask()
{
    return task;
}

//-------------------------------------------------------------------
// component operational
bool Robot::executeTask()
{
    int totalDistance = distanceToDestination();                    // returns total units robot needs to travel to execute task based on entered info
                                         
    if (energyLevel > totalDistance)
    {
        currentPosition = destinationPosition;
        energyLevel = energyLevel - totalDistance;
        task = task.insert(0, "Completed: ");
        return true;
    }
    else
    {
        cout << "Robot " << name << " unable to complete the task." << endl;
        cout << "Destination unreachable with current energy level." << endl;
        int energyNeeded = totalDistance - energyLevel;
        cout << energyNeeded << " more energy units are needed to execute this task." << endl;
        return false;
    }
}

//-------------------------------------------------------------------
// component operational
// Print the current status of the robot
// when outputting currently know information on the robot, pad the output with a line of asterisks
void Robot::status()
{
    cout << "***************************************************************" << endl;
    cout << endl;
    cout << "Robot " << name << " located at " << "(" << currentPosition.getX() << ", " << currentPosition.getY() << ") " << endl;
    cout << "Task: " << task << endl;
    cout << "Destination: " << "(" << destinationPosition.getX() << ", " << destinationPosition.getY() << ") " << endl;
    cout << "Energy Level: " << energyLevel << endl;
    cout << "***************************************************************" << endl;
    
}

//-------------------------------------------------------------------
// Transfer the task and all the energy to the other robot
// the data of the other object will be refered to internally as other robot, this refers to the original calling object, and not to otherRobot!
void Robot::transferTaskToFriend(Robot& otherRobot)
{
    otherRobot.energyLevel = (otherRobot.energyLevel + this -> energyLevel);
    otherRobot.task = this -> task;
    otherRobot.destinationPosition = this -> destinationPosition;
    
    string transferString = "transfered to " + otherRobot.name;
    this -> task = transferString;
    this -> destinationPosition = currentPosition;
    this -> energyLevel = 0;
}

//-------------------------------------------------------------------

