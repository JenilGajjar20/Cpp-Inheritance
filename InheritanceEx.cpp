#include <iostream>
using namespace std;

// Base Class
class Parent
{
public:
    int id_p;
};

// Sub Class inheriting from Base Class(Parent)
class Child : public Parent
{
public:
    int id_c;
};

int main()
{
    Child obj; // obj is an object of class Child which has all the data members and member functions of class Parent

    obj.id_c = 5;
    obj.id_p = 15;
    cout << "Value of id_c: " << obj.id_c;
    cout << "\nValue of id_p: " << obj.id_p;
    return 0;
}