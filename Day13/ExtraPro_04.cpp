// Bank Account (Encapsulation)

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    void setBalance(double b) { balance = b; }
    void getBalance() { cout << "Current Balance: " << balance << endl; }
};

int main() {
    BankAccount b;
    double bal;
    cout << "Enter balance: "; cin >> bal;
    b.setBalance(bal);
    b.getBalance();
    return 0;
}