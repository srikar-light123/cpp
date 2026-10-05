
#include<iostream>
using namespace std;
class Bank {
private:
    int balance;        // Hidden data

public:
    void deposit(int amount) {
        balance = balance + amount;
    }

    int getBalance() {
        return balance;
    }
};
