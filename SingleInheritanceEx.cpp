#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
public:
    // Creating the Constructor
    Vehicle()
    {
        cout << "This is Vehicle.";
    }
};

// Derived Class
class Car : public Vehicle
{
};

int main()
{
    // Creating the object of the derived class named 'obj' which will invoke the constructor in the Base Class.
    Car obj;
    return 0;
}