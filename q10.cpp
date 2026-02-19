/*Question 10*/
#include <iostream>
using namespace std;

class Branch
{
    string branchName;
    string city;
public:
    Branch(string name, string c) : branchName(name), city(c) {}
    void show() const
    {
        cout << "Branch: " << branchName << ", City: " << city << endl;
    }
};

class Account
{
    string accountHolder;
    double balance;
    Branch* b;
public:
    static string bankName;
    static float interestRate;

    Account(string name, double bal, Branch* br) : accountHolder(name), balance(bal), b(br) {}

    void deposit(double amount) { balance += amount; }

    void showBalance() const
    {
        cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
        if (b) b->show();
        cout << "Bank: " << bankName << ", Interest Rate: " << interestRate << "%" << endl;
        cout << "-------------------------" << endl;
    }

    static void updateInterestRate(float rate) { interestRate = rate; }
};

string Account::bankName = "MyBank";
float Account::interestRate = 5.0;

int main()
{
    Branch br1("Main Branch", "Karachi");
    Branch br2("City Branch", "Lahore");

    Account accounts[3] = {
        Account("Daniya", 1000, &br1),
        Account("Ali", 1500, &br2),
        Account("Sara", 2000, &br1)
    };

    accounts[0].deposit(500);
    accounts[1].deposit(300);

    for (int i = 0; i < 3; i++)
        accounts[i].showBalance();

    cout << "Updating interest rate to 7%\n";
    Account::updateInterestRate(7);

    for (int i = 0; i < 3; i++)
        accounts[i].showBalance();

    return 0;
}

