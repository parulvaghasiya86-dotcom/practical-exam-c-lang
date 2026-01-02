#include <iostream>
using namespace std;

class Laptop {
private:
    string name;
    int price;
    string processor;

public:
    Laptop(string n, int p, string proc) {
        name = n;
        price = p;
        processor = proc;
    }

    void displayDetails() {
        cout << name << " " << price << " " << processor << endl;
    }
};

int main() {
    string name, processor;
    int price;

    cout << "Enter laptop name: ";
    cin >> name;

    cout << "Enter laptop price: ";
    cin >> price;

    cout << "Enter processor: ";
    cin >> processor;

    Laptop lap(name, price, processor);
    lap.displayDetails();

    return 0;
}

/*
    output:
    Enter laptop name: Asus
    Enter laptop price: 60500
    Enter processor: 12
    Asus 60500 12
*/
