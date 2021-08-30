#include<iostream>
using namespace std;

//Base Class
class Vehicle
{
    public:
        Vehicle()
        {
            cout<<"This is Vehicle.\n";
        }
};

// Derived Class - 1
class Car : public Vehicle
{
    public:
        Car()
        {
            cout<<"This is Car.\n";
        }
};

// Derived Class - 2
class Bus : public Vehicle
{
    public: 
        Bus()
        {
            cout<<"This is Bus.\n";
        }
};

int main()
{
    Car obj1;
    Bus obj2;
    return 0;
}