/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "main.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    const int SIZE = 3;
    Dog roster[SIZE];
    
    roster[0].setName("Ah");
    roster[1].setName("Fey");
    roster[2].setName("Zey");
    
    roster[0].setLicenseNumber(24);
    roster[1].setLicenseNumber(18);
    roster[2].setLicenseNumber(10);
    
    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}

