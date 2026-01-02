#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle {
private:
    string model;

public:
    Car(string m) {
        model = m;
    }

    void startEngine() {
        cout << "Car " << model << " engine started." << endl;
    }

    void drive() {
        cout << "Car " << model << " is driving." << endl;
    }
};

class Bike : public Vehicle {
private:
    string model;

public:
    Bike(string m) {
        model = m;
    }

    void startEngine() {
        cout << "Bike " << model << " engine started." << endl;
    }

    void drive() {
        cout << "Bike " << model << " is riding." << endl;
    }
};

int main() {
    Vehicle* vehicles[2];
    string carModel, bikeModel;

    cout << "Enter car model: ";
    cin.ignore(); 
    getline(cin, carModel);
    vehicles[0] = new Car(carModel);

    cout << "Enter bike model: ";
    getline(cin, bikeModel);
    vehicles[1] = new Bike(bikeModel);

    for (int i = 0; i < 2; i++) {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        cout << endl;
    }

    return 0;
}


/*
    output:
Enter car model: bmw m4
Enter bike model: slpedar
Car bmw m4 engine started.
Car bmw m4 is driving.

Bike slpedor engine started.
Bike slpedor is riding.

*/