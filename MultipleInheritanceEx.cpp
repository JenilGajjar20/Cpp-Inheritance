#include<iostream>
using namespace std;

// Base Class - 1
class Vehicle
{
    public:
    // Creating the Constructor
        Vehicle()
        {
            cout<<"This is Vehicle.";
        }
};

// Base Class - 2
class FourWheelers
{
    public:
    // Creating the Constructor
        FourWheelers()
        {
            cout<<"\nThis is the 4 Wheeler Vehicle.";
        }
};

// Derived Class
class Car : public Vehicle, public FourWheelers
{};

int main()
{
    Car obj; 
    return 0;
}