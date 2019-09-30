#include <iostream>
 
using namespace std;

//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

class Shape 
{
    public:
      // Constructor definition
      int length;     // Length of a box
      int width;
      Shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }
	  
      double Area() 
      {
         return length * width;
      }
	
	  int operator + (Shape sh2){
	       int nlength = this->length + sh2.length;
	       int nwidth = this->width + sh2.width;
	       return (nwidth * nlength);
	  }	
};

