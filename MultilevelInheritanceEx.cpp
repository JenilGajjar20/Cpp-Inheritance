#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is Vehicle.";
    }
};

// First sub_class derived from the Class Vehicle
class FourWheeler : public Vehicle
{
public:
    FourWheeler()
    {
        cout << "\nThis is 4 Wheeler Vehicle.";
    }
};

// sub_class derived from the derived base class FourWheeler
class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "\nThis is Car.";
    }
};

int main()
{
    // Creating the object to invoke the constructor of base classes
    Car obj;
    return 0;
}