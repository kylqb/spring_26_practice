// Beaver_dog_class.cpp
// Kyla Beaver 

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name; int age; string breed;

public:
    //setters
    void setName(string names) { 
        name = names;
    };
    void setAge(int ages) {
        age = ages;
    };
    void setBreed(string breed) {};
    Dog(string n, int a, string b) { 
        //this is a constructor so i can 
        //hard code values in main
        name = n;
        age = a;
        breed = b;
    }

    //getters
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getBreed() {
        return breed;
    }

    //functions
    void bark() {
        cout << "Woof! Woof!\n";
    }
    void displayDog() {
        //displays all dog attributes to console
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Breed: " << getBreed() << endl;
        cout << "------------------------\n";
    };
};



int main()
{
    //declaring dog object and hard coding data into constructor
    Dog dog1("Max", 7, "Golden Retriever");

    //display members
    dog1.displayDog();
    dog1.bark();

    //input from user - change age
    int newAge;
    cout << dog1.getName() << " has had a birthday since then, how old are" << 
                              " they now? \n"; //this is an excuse to change age
    cout << "New age: ";
    cin >> newAge;
    dog1.setAge(newAge);
    cout << endl;

    //output new info
    dog1.displayDog();
    dog1.bark();


    return 0;
}
