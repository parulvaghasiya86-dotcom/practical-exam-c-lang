
4.
#include <iostream>
using namespace std;

class Shape {
private:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    virtual void displayDetails() = 0;
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(string c, int r) {
        setColor(c);
        radius = r;
    }

    void displayDetails() {
        cout << "Shape: Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << 3 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int breadth;

public:
    Rectangle(string c, int l, int b) {
        setColor(c);
        length = l;
        breadth = b;
    }

    void displayDetails() {
        cout << "Shape: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Shape* shapes[2];
    string color;
    int radius, length, breadth;

    cout << "Enter color of circle: ";
    cin >> color;
    cout << "Enter radius of circle: ";
    cin >> radius;
    shapes[0] = new Circle(color, radius);

    cout << "Enter color of rectangle: ";
    cin >> color;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    shapes[1] = new Rectangle(color, length, breadth);

    for (int i = 0; i < 2; i++) {
        shapes[i]->displayDetails();
        cout << endl;
    }

    return 0;
}


/*
    output:
Enter color of circle: black
Enter radius of circle: 7
Enter color of rectangle: black
Enter length of rectangle: 35
Enter breadth of rectangle: 34
Shape: Circle
Color: black
Radius: 7
Area: 147

Shape: Rectangle
Color: black
Length: 35
Breadth: 34
Area: 1190


*/