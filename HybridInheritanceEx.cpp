#include<iostream>
using namespace std;

// Base Class - 1
class Vehicle
{
    public:
        Vehicle()
        {
            cout<<"This is Vehicle.\n";
        }
};

// Base Class - 2
class FourWheeler
{
    public:
        FourWheeler()
        {
            cout<<"This is 4 Wheeler Vehicle.\n";
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
class Bus : public Vehicle, public FourWheeler
{
    public:
        Bus()
        {
            cout<<"This is Bus.\n";
        }
};

int main()
{
    Car c;
    Bus b;
    return 0;
}