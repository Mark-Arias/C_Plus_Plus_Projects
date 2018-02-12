//---------------------------------------------------------------------
// Client Code:
// This code section is used to implement all the objects defined by their respective classes in the other
// source code files
// Program Purpse:
//
#include <iostream>
#include <string>
#include <cmath>
#include "RobotDriver.h"
using namespace std;



int main()
{
    
    //---------------------------------------------------------------------
    // Testing how well the program replicates sample source output
    Robot zero("Zero");
    zero.status();
    Robot rob("Rob", 10, 10);
    Robot walle("Walle", 50, 10);
    rob.status();
    walle.status();
    rob.setDestination(88, 50);
    rob.setTask("Pick up book");
    rob.executeTask();
    rob.status();
    rob.transferTaskToFriend(walle);
    walle.executeTask();
    walle.status();
    rob.status();
    
    Robot john("John",25,30);
    john.status();
    Robot rick("rick", 25, 25);
    Robot joe("joe", 0, 10);
    joe.transferTaskToFriend(rick);
    rick.setTask("go to seven eleven");
    rick.setDestination(23,23);
    rick.executeTask();
    rick.status();
    joe.status();
    john.setTask("purchase lemons");
    john.setDestination(2,2);
    john.executeTask();
    john.status();
    
   
    //---------------------------------------------------------------------
    // make 3 more robots here
    // give them good tasks and exercise their functionality
    
    
    return 0;
}
