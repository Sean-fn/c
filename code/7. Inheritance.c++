//Example 1


#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{ 
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}

=====================================================================================
//Example 2
=====================================================================================

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Main function
int main() {
    // Creating an object of derived class
    Dog myDog;

    // Accessing base class function
    myDog.sound();

    // Accessing derived class function
    myDog.bark();

    return 0;
}



//==========================================================================
// //Example 3: Single Inheritance 
//==========================================================================

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void draw() {
        cout << "Drawing shape..." << endl;
    }
};

// Derived class inheriting from Shape
class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing circle..." << endl;
    }
};

int main() {
    Circle circle;
    circle.draw(); // Accessing base class method
    circle.drawCircle(); // Accessing derived class method
    return 0;
}

//==========================================================================
//Example 4:  Multiple Inheritance Example
//==========================================================================
#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class method" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
        cout << "Base2 class method" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Derived class method" << endl;
    }
};

int main() {
    Derived derived;
    derived.displayBase1(); // Accessing Base1 method
    derived.displayBase2(); // Accessing Base2 method
    derived.displayDerived(); // Accessing Derived method
    return 0;
}


//==========================================================================
//Example 4:  Multilevel Inheritance Example
//==========================================================================
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Another derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    void specialAbility() {
        cout << "German Shepherd has special abilities" << endl;
    }
};

int main() {
    GermanShepherd gs;
    gs.sound(); // Accessing base class method
    gs.bark(); // Accessing intermediate derived class method
    gs.specialAbility(); // Accessing derived class method
    return 0;
}


//==========================================================================
// Example 5: Hierarchical Inheritance Example
//==========================================================================
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Another derived class inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    dog.sound(); // Accessing base class method
    dog.bark(); // Accessing derived class method
    cat.sound(); // Accessing base class method
    cat.meow(); // Accessing derived class method
    return 0;
}

//==========================================================================
// Examples6: function overriding in inheritance 
//==========================================================================

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog inheriting from Animal
class Dog : public Animal {
public:
    // Overridden function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat inheriting from Animal
class Cat : public Animal {
public:
    // Overridden function
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;

    // Pointing to a Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound()

    // Pointing to a Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound()

    return 0;
}





//============================================More practical exmaple:========================
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Ex1: 

#include <iostream>
using namespace std;

class stud {
protected:
    int roll, m1, m2;

public:
    void get()
    {
        cout << "Enter the Roll No.: "; cin >> roll;
        cout << "Enter the two highest marks: "; cin >> m1 >> m2;
    }
};
class extracurriculam {
protected:
    int xm;

public:
    void getsm()
    {
        cout << "\nEnter the mark for Extra Curriculam Activities: "; cin >> xm;
    }
};
class output : public stud, public extracurriculam {
    int tot, avg;

public:
    void display()
    {
        tot = (m1 + m2 + xm);
        avg = tot / 3;
        cout << "\n\n\tRoll No    : " << roll << "\n\tTotal      : " << tot;
        cout << "\n\tAverage    : " << avg;
    }
};
int main()
{
    output O;
    O.get();
    O.getsm();
    O.display();
}



//============================================

Ex2: 

#include <iostream>
#include <string.h>
using namespace std;

class member {
    char gender[10];
    int age;

public:
    void get()
    {
        cout << "Age: "; cin >> age;
        cout << "Gender: "; cin >> gender;
    }
    void disp()
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class stud : public member {
    char level[20];

public:
    void getdata()
    {
        member::get();
        cout << "Class: "; cin >> level;
    }
    void disp2()
    {
        member::disp();
        cout << "Level: " << level << endl;
    }
};
class staff : public member {
    float salary;

public:
    void getdata()
    {
        member::get();
        cout << "Salary: Rs."; cin >> salary;
    }
    void disp3()
    {
        member::disp();
        cout << "Salary: Rs." << salary << endl;
    }
};
int main()
{
    member M;
    staff S;
    stud s;
    cout << "Student" << endl;
    cout << "Enter data" << endl;
    s.getdata();
    cout << endl
    << "Displaying data" << endl;
    s.disp();
    cout << endl
    << "Staff Data" << endl;
    cout << "Enter data" << endl;
    S.getdata();
    cout << endl
    << "Displaying data" << endl;
    S.disp();
}



//===========================================

Ex3: 


#include <iostream>
using namespace std;

class base {
public:
    void display1()
    {
        cout << "\nBase class content.";
    }
};
class derived : public base {
public:
    void display2()
    {
        cout << "1st derived class content.";
    }
};

class derived2 : public derived {
    void display3()
    {
        cout << "\n2nd Derived class content.";
    }
};

int main()
{
    derived2 D;
    //D.display3();
    D.display2();
    D.display1();
}


//===========================================

Ex4: 

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
public:
    // Overridden function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
public:
    // Overridden function
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shapePtr;
    Circle circle;
    Rectangle rectangle;

    // Pointing to a Circle object
    shapePtr = &circle;
    shapePtr->draw(); // Calls Circle's draw()

    // Pointing to a Rectangle object
    shapePtr = &rectangle;
    shapePtr->draw(); // Calls Rectangle's draw()

    return 0;
}


//===========================================

Ex5: 

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    // Virtual function
    virtual void start() {
        cout << "Vehicle starts" << endl;
    }
};

// Derived class Car inheriting from Vehicle
class Car : public Vehicle {
public:
    // Overridden function
    void start() override {
        cout << "Car starts with ignition" << endl;
    }
};

// Derived class Bike inheriting from Vehicle
class Bike : public Vehicle {
public:
    // Overridden function
    void start() override {
        cout << "Bike starts with kick" << endl;
    }
};

int main() {
    Vehicle* vehiclePtr;
    Car car;
    Bike bike;

    // Pointing to a Car object
    vehiclePtr = &car;
    vehiclePtr->start(); // Calls Car's start()

    // Pointing to a Bike object
    vehiclePtr = &bike;
    vehiclePtr->start(); // Calls Bike's start()

    return 0;
}


//===========================================

Ex3: 
