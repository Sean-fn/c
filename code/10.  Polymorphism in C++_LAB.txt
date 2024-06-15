// Exmaple1 

#include <bits/stdc++.h>

using namespace std;
class Geeks {
public:
	// Function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name but
	// 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name and
	// 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

// Driver code
int main()
{
	Geeks obj1;

	// Function being called depends
	// on the parameters passed
	// func() is called with int value
	obj1.func(7);

	// func() is called with double value
	obj1.func(9.132);

	// func() is called with 2 int values
	obj1.func(85, 64);
	return 0;
}

//Exmaple2

#include <iostream>

using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->display(); // Output: "Derived class display()"
    delete basePtr;
    return 0;
}


---------------------------------------------------------------------------------------
Example 3

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "An animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override makeSound() for Dog
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override makeSound() for Cat
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// Derived class 3
class Bird : public Animal {
public:
    // Override makeSound() for Bird
    void makeSound() override {
        cout << "Bird chirps: Chirp! Chirp!" << endl;
    }
};

int main() {
    // Create instances of each animal type
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();
    Animal* myBird = new Bird();

    // Call makeSound() for each animal
    myDog->makeSound();   // Outputs: Dog barks: Woof! Woof!
    myCat->makeSound();   // Outputs: Cat meows: Meow! Meow!
    myBird->makeSound();  // Outputs: Bird chirps: Chirp! Chirp!

    delete myDog;
    delete myCat;
    delete myBird;

    return 0;
}


// Example 4: Function Overloading
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << math.add(5, 7) << endl;      // calls int add(int, int)
    cout << math.add(3.5, 4.2) << endl;  // calls double add(double, double)
    return 0;
}

// Example 5: Virtual Functions
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();  // Output: Dog barks
    return 0;
}

// Exmaple: 7  Runtime Polymorphism
#include <iostream>

using namespace std;

class Animal {
public:
    virtual void speak() const { // Virtual function to be overridden
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override { // Override virtual function with "woof"
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override { // Override virtual function with "meow"
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr; // Base class pointer

    Dog dog;
    Cat cat;

    animalPtr = &dog; // Point to a Dog object
    animalPtr->speak();  // Calls Dog's speak() (runtime polymorphism)

    animalPtr = &cat; // Point to a Cat object
    animalPtr->speak();  // Calls Cat's speak() (runtime polymorphism)

    return 0;
}


// Example 6: Abstract Classes and Pure Virtual Functions
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Output: Drawing Circle
    return 0;
}

// Example 7: Polymorphic Containers
#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Square());

    for (Shape* shape : shapes) {
        shape->draw();
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}



// Example 10: Operator Overloading
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {} // Default constructor

    // Overloading the + operator for Point objects
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y); // Add corresponding coordinates
    }

    // Overloading the << operator for easy output using cout
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);
    Point p3 = p1 + p2;  // Calls overloaded + for Point objects

    cout << "p1 + p2 = " << p3 << endl; // Output: (6, 8)

    return 0;
}




#include <iostream>

// Using namespace directive
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Override the draw function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Square : public Shape {
public:
    // Override the draw function
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    // Create objects of different classes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    // Call the draw function on each object
    shape1->draw(); // This will call the draw function of the Circle class
    shape2->draw(); // This will call the draw function of the Square class

    // Remember to deallocate memory
    delete shape1;
    delete shape2;

    return 0;
}
