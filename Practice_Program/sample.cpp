#include <iostream>
using namespace std;

// Class definition
class Animal {
public:
    // Member variables
    string name;
    int age;

    // Constructor
    Animal(string n, int a) {
        name = n;
        age = a;
    }

    // Member function
    void speak() {
        cout << "Animal: " << name << ", Age: " << age << " years." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Additional member variable
    string breed;

    // Constructor
    Dog(string n, int a, string b) : Animal(n, a) {
        breed = b;
    }

    // Overridden member function
    void speak() {
        cout << "Dog: " << name << ", Breed: " << breed << ", Age: " << age << " years." << endl;
    }
};

// Main function
int main() {
    // Variable declaration
    Dog myDog("Buddy", 3, "Golden Retriever");
    
    // Conditional statement
    if (myDog.age > 0) {
        myDog.speak();  // Calling member function
    }

    // Looping statement
    for (int i = 0; i < 5; i++) {
        cout << "Counting: " << i + 1 << endl;
    }

    // Switch case example
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose option 1." << endl;
            break;
        case 2:
            cout << "You chose option 2." << endl;
            break;
        case 3:
            cout << "You chose option 3." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;  // Return statement
}

