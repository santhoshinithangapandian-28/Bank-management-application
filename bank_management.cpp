#include <iostream>
#include <fstream>
#include <string>

class Account {
    int accountNum;
    char name[50];
    double balance;

public:
    void createAccount() {
        std::cout << "\nEnter Account Number: "; std::cin >> accountNum;
        std::cout << "Enter Name: "; std::cin.ignore(); std::cin.getline(name, 50);
        std::cout << "Enter Initial Deposit: "; std::cin >> balance;
    }

    void deposit(double amount) { balance += amount; }
    
    bool withdraw(double amount) {
        if (amount > balance) return false;
        balance -= amount;
        return true;
    }

    void display() const {
        std::cout << "\nAcc #: " << accountNum << "\nName: " << name << "\nBalance: " << balance << std::endl;
    }

    int getID() const { return accountNum; }
};
