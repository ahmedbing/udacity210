/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog
{
    int license;
    string name;
    
    public:
        string getName();
        int getLicense();
    
        Dog();
        Dog(string nameIn);
        Dog(int licenseIn);
        Dog(string nameIn, int licenseIn);
    
};

string Dog::getName(){
    return name;
}

int Dog::getLicense(){
    return license;
}

Dog::Dog(){
    name = "Empyt";
    license = 0000;
}

Dog::Dog(string nameIn){
    name = nameIn; 
}

Dog::Dog(int licenseIn){
    license = licenseIn;
}
Dog::Dog(string nameIn, int licenseIn){
    name = nameIn;
    license = licenseIn;
}
