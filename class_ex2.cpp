/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "main.hpp"

int main(){
    
    Cat cat1,cat2;
    cat1.setName("Ahmed");
    cat2.setName("Zeynep");
    
    cat1.setBreed("Ma");
    cat2.setBreed("FeMa");
    
    cat1.setAge(24);
    cat2.setAge(10);
    
    cat1.printInfo();
    cat2.printInfo();
    
    return 0;
}
