/*header file*/
/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
    T m1, m2;
    T product;
public:
    void printEquation();
    void setM1(T mIn);
    void setM2(T mIn);
    void setProduct();
    T getProduct();
    T getM1();
    T getM2();
};

template<class T>
T Multiplier<T>::getM1(){
    return m1;
}

template<class T>
T Multiplier<T>::getM2(){
    return m2;
}

template<class T>
T Multiplier<T>::getProduct(){
    return product;
}

template<class T>
void Multiplier<T>::setM1(T mIn){
    m1 = mIn;
}

template<class T>
void Multiplier<T>::setM2(T mIn){
    m2 = mIn;
}

template<class T>
void Multiplier<T>::setProduct(){
    product = m1*m2;
}

template<class T>
void Multiplier<T>::printEquation(){
    cout<< getM1() << " * " << getM2() << " = " << product <<"\n";
}







