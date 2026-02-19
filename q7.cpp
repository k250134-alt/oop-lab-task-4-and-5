/*7. Bank wants to track accounts and interest policy.
Class Account:
• accountHolder
• balance
• static bankName
• static interestRate
• const function showBalance()
• function deposit()
Create 3 accounts and demonstrate:
• deposit
• static value sharing
• const function usage*/
#include <iostream>
using namespace std;

class Account
{
    string accountHolder;
    double balance;
public:
    static string bankName;
    static double interestRate;

    Account(string name, double bal): accountHolder(name), balance(bal) {}

    void deposit(double amount) 
	{
	 balance += amount; 
    }

    void showBalance() const {
	 cout << accountHolder << "'s balance: " << balance << endl; 
	 }
};

string Account::bankName = "MyBank";
double Account::interestRate = 5.0;

int main()
{
    Account a1("Daniya", 1000);
    Account a2("Ali", 1500);
    Account a3("Sara", 2000);

    a1.deposit(500);
    a2.deposit(300);

    cout << "Bank Name: " << Account::bankName << endl;
    cout << "Interest Rate: " << Account::interestRate << "%" << endl;

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();

    return 0;
}

