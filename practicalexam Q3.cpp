2.
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    int balance;
    string ownerName;

public:
    BankAccount(int accNo, string name, int bal) {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

    void credit(int amount) {
        balance += amount;
    }

    void debit(int amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }

    void displayBalance() {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int accNo, bal, amount;
    string name;

    cout << "Enter account number: ";
    cin >> accNo;

    cout << "Enter owner name: ";
    cin >> name;

    cout << "Enter initial balance: ";
    cin >> bal;

    BankAccount account(accNo, name, bal);

    cout << "Enter amount to credit: ";
    cin >> amount;
    account.credit(amount);

    cout << "Enter amount to debit: ";
    cin >> amount;
    account.debit(amount);

    account.displayBalance();

    return 0;
}

/*
    output:
  
Enter account number: 12345
Enter owner name: Shyam
Enter initial balance: 200000
Enter amount to credit: 45000
Enter amount to debit: 59000

Account Holder: Shyam
Account Number: 12345
Balance: 186000
*/

3.
#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    int area;

public:
    void setColor(string c) {
        color = c;
    }

    void setArea(int a) {
        area = a;
    }

    int getArea() {
        return area;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    void setRadius(int r) {
        radius = r;
    }

    void calculateArea() {
        setArea(3 * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    void calculateArea() {
        setArea(length * breadth);
    }
};

int main() {
    Circle c;
    Rectangle r;
    string color;
    int radius, length, breadth;

    cout << "Enter color of circle: ";
    cin >> color;
    c.setColor(color);

    cout << "Enter radius of circle (number only): ";
    cin >> radius;
    c.setRadius(radius);
    c.calculateArea();

    cout << "Circle Area: " << c.getArea() << endl;

    cout << "Enter color of rectangle: ";
    cin >> color;
    r.setColor(color);

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    r.setDimensions(length, breadth);
    r.calculateArea();

    cout << "Rectangle Area: " << r.getArea() << endl;

    return 0;
}

/*
output:
Enter color of circle: black
Enter radius of circle (number only): 5
Circle Area: 75
Enter color of rectangle: black
Enter length of rectangle: 23
Enter breadth of rectangle: 45
Rectangle Area: 1035
*/