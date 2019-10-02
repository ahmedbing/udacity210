#include <iostream>
#include <string.h>
using namespace std;

class Flower
{
    private:
        string bloomTime;
    public:
        Flower();
        void setBloomTime(string bloomIn);
        string getBloomTime();
};

Flower::Flower()
{
    bloomTime = " summer ";
}

void Flower::setBloomTime(string bloomIn)
{
    bloomTime = bloomIn;//TODO: Complete the function
}

string Flower::getBloomTime()
{
    return bloomTime; //TODO: Complete the function
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower
{
    private:
        string fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
};

Rose::Rose()
{
    fragrance = " Lavanda ";
}

void Rose::setFragrance(string fragIn)
{
    fragrance= fragIn;//TODO: Complete the function
}

string Rose::getFragrance()
{
    return fragrance; //TODO: Complete the function
}


