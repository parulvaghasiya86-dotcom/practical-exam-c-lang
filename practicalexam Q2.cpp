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