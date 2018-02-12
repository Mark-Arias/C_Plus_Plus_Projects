//-------------------------------------------------------------------
// Interface File:





//-------------------------------------------------------------------
// SAFEGUARDS AND INCLUDES
#ifndef RobotDriver_h
#define RobotDriver_h

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


//-------------------------------------------------------------------
/*
 * Point in a 2D grid
 */

///////////////////////////////////////////
/////// class point defintion       ///////
///////////////////////////////////////////

class Point
{
public:
    // Make a point at (0, 0)
    Point();
    // Make a point at (x, y). If a coord is out of the range [0, 99], that coord is set to 0
    Point(int x, int y);
    // Get the x coordinate
    int getX();
    // Get the y coordinate
    int getY();
    
    friend void setDestination(int x, int y);
private:
    // x coordinate
    int xPos;
    // y coordinate
    int yPos;
};

//-------------------------------------------------------------------

///////////////////////////////////////////
/////// class Robot defintion       ///////
///////////////////////////////////////////

class Robot
{
public:
    // Make a robot with the given name located at 0, 0 with 100 energy units
    Robot(string name);
    // Make a robot with the given name located at x, y with 100 energy units
    Robot(string name, int x, int y);
    // Get the robot name
    string getName();
    // Get the x position
    int getPosX();
    // Get the y position
    int getPosY();
    // Get the current energy level
    int getEnergyLevel();
    // Increment the energy level by the given energy amount
    void charge(int energyUnits);
    // Set the destination where the task needs to be executed
    void setDestination(int x, int y);
    // Get the x coord of the destination
    int getDestX();
    // Get the y coord of the destination
    int getDestY();
    // Set the task description
    void setTask(string requestedTask);
    
    // Get the task description
    string getTask();
    
    
    /*
     * Execute the task only if the robot has enough energy to carry it out. Return true if successful.
     * Energy is used up at 1 unit per grid square movement. The robot can only move vertically or horizontally
     * in the grid (not diagonally) and 1 square move costs 1 energy unit.
     * If the robot does not have enough energy, it does not move and no energy is used up. It prints out
     * how many units it is short of energy to carry out the task and returns false.
     *
     * This function must use the distanceToDestination helper function to calculate how much energy is needed/used up.
     */
    bool executeTask();
    
    // Print the current status of the robot
    void status();
    
    // Transfer the task and all the energy to the other robot
    void transferTaskToFriend(Robot& otherRobot);
    
private:
    // robot name
    string name;
    
    // the current position in the grid
    Point currentPosition;
    
    // the destination in the grid where the task needs to be executed
    Point destinationPosition;
    
    // the energy level
    int energyLevel;
    // the task description
    string task;
    /*
     * helper function to calculate the distance from the current position to the destination.
     * Remember that the robot only moves vertically or horizontally (never diagonal)
     */
    int distanceToDestination()
    {
        int xDistance;
        int yDistance;
        xDistance = abs(destinationPosition.getX() - currentPosition.getX());
        yDistance = abs(destinationPosition.getY() - currentPosition.getY());
        int totalDistance = xDistance + yDistance;
        
        return totalDistance;
    }
};

//-------------------------------------------------------------------


#endif /* RobotDriver_h */
