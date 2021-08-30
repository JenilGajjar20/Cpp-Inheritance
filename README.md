# C++ Inheritance

The capability of a class to derive properties and characteristics from another class is called as **Inheritance**.

Inheritance is one of the most important feature of _Object Oriented Programming_.

**Sub Class**: The class that inherits properties from another class is called as **Sub Class, Derived Class** or **Child Class**.

**Super Class**: The class whose properties are inherited by sub class is called as **Super Class, Base Class** or **Parent Class**.

## Why and When to use Inheritance?

Consider a group of Vehicles. You need to create classes for Bus, Car and Truck. The methods **fuelAmount()**, **capacity()** and **applyBrakes()** will be same for all of the three classes. If we create these classes avoiding inheritance than we have to write all of these functions in each of the three classes.

This process resutls in the duplication of same code 3 times.

This increases the chances of error and data redundancy.

However, to avoid this kind of situation inheritance is used.

If we create a class named **Vehicle** and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the increase of duplication of data and increase the reuseability.

![inheritanceImg](https://user-images.githubusercontent.com/68738624/131290030-3c1f7275-da2f-4b50-a7cb-45f824ce4d0a.png)

Using inheritance, we have to write the functions only one time instead of three times as we have inherited rest of the three classes from base class i.e. **Vehicle**.

## Syntax

```
class subclass_name : access_mode baseclass_name
{
    // Body of sub class
}
```

Here, **subclass_name** is the name of the sub class, **access_mode** is the mode in which you want to inherit this sub class, for exmaple: **private**, **public** or **protected** and **baseclass_name** is the name of the base class from which you want to inherit the sub class.

## Modes of Inheritance

1. Public Mode

- If we derive a sub class from a public base class then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.

2. Protected Mode

- If we derive a sub class from a protected base class then both public member and protected members of the base class will become protected in derived class.

3. Private Mode

- If we derive a sub class from a private base class then both public member and protected members of the class will become private in derived class.

### Example

```
class A
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible
};

class D : protected A
{
    // x is private
    // y is private
    // z is not accessible
};
```

![inheritance-table-class](https://user-images.githubusercontent.com/68738624/131292990-32eab8ee-a362-4a2f-a403-4c8b7843ad08.png)

## Types of Inheritance

a. **Single Inheritance**<br />
b. **Multiple Inheritance**<br />
c. **Multlevel Inheritance**<br />
d. **Hierarchical Inheritance**<br />
e. **Hybrid(Virtual) Inheritance**<br />

### a. Single Inheritance

- In Single Inheritance, a class is allowed to inherit from only one class i.e. one sub class is inherited by one base class only.

#### Syntax

```
class subclass_name : access_mode baseclass_name
{
    // Body of sub class
};
```

![SingleInheritanceImg](https://user-images.githubusercontent.com/68738624/131293481-928f96bc-0270-4b66-8f71-73ef3144a3ae.png)

### b. Multiple Inheritance

- Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes i.e. one _sub class_ in inherited from nore than one _base class_.

#### Syntax

```
class subclass_name : access_mode base class_1,
                        access_mode base class_2
{
    // Body of sub class
};
```

Here, the number of base classes will be separated by comma(,) and access mode for every class must be specified.

![MultipleInheritanceImg](https://user-images.githubusercontent.com/68738624/131300685-334443aa-4e39-4940-a80d-3fc0c0749e87.png)

### c. Multilevel Inheritance

- In this type of inheritance a derived class is created from another derived class.

![MultilevelInheritanceImg](https://user-images.githubusercontent.com/68738624/131301270-d2246415-6173-4472-9e75-df15d0ffeb7b.png)

### d. Hierarchical Inheritance

- In this type of inheritance more than one sub class is inherited from a single base class i.e. more than one derived class is created from a single base class.

![HierarchicalInheritanceImg](https://user-images.githubusercontent.com/68738624/131302613-62c3e669-20e2-4071-9334-a815703b418b.png)

### e. Hybrid Inheritance

- Hybrid inheritance is implemented by combining more than one type of inheritance. eg-> Combining Hierarchical and Multiple Inheritance.

![HybridInheritanceImg](https://user-images.githubusercontent.com/68738624/131313761-8f699ae5-3745-4f36-ac61-509eda7ab6d7.png)
