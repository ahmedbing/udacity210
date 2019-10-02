//header file for main.cpp
#include<iostream>
#include<string>
 
using namespace std;

class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}

class Pet: public Dog, public Patient 
{
    string name;
    
    public:
        string getName();
        void setName(string nameIn);
        Pet();
};

Pet::Pet()
{
    name = " Kömür ";
}

string Pet::getName(){
    return name;
}

void Pet::setName(string nameIn){
    name = nameIn;
}


