#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;
public:
    BankAccount(string accNum, double initialBalance) 
        : accountNumber(accNum), balance(initialBalance) {}
    
    ~BankAccount() {}

    BankAccount(const BankAccount &other) 
        : accountNumber(other.accountNumber), balance(other.balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds for withdrawal of: " << amount << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};



int main() {
    BankAccount acc("123456",1000);// 创建账户：账号"123456"，初始余额1000
    acc.deposit(500);// 存款500
    acc.withdraw(2000);// 尝试取款2000（应该失败）
    acc.withdraw(800);// 取款800
    acc.showBalance();// 显示最终余额
    system("pause");
    return 0;
}