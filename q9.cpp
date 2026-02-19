/*	Question 9*/
#include <iostream>
using namespace std;

class Project
{
    string projectTitle;
    int duration;
public:
    Project(string title, int dur) : projectTitle(title), duration(dur) {}
    void show() const
    {
        cout << "Project: " << projectTitle << ", Duration: " << duration << " months" << endl;
    }
};

class Employee
{
    string empName;
    float salary;
    Project* p;
public:
    static float taxRate;
    Employee(string name, float sal, Project* proj) : empName(name), salary(sal), p(proj) {}
    float calculateNetSalary() const
    {
        return salary * (1 - taxRate / 100);
    }
    void show() const
    {
        cout << "Employee: " << empName << ", Salary: " << salary << ", Net Salary: " << calculateNetSalary() << endl;
        if (p)
            p->show();
        cout << "-------------------------" << endl;
    }
    static void changeTaxRate(float newRate)
    {
        taxRate = newRate;
    }
};

float Employee::taxRate = 10;

int main()
{
    Project p1("AI Development", 12);
    Project p2("Web App", 6);

    Employee employees[3] = {
        Employee("Daniya", 5000, &p1),
        Employee("Ali", 6000, &p2),
        Employee("Sara", 5500, &p1)
    };

    for (int i = 0; i < 3; i++)
        employees[i].show();

    cout << "Changing tax rate to 15%\n";
    Employee::changeTaxRate(15);

    for (int i = 0; i < 3; i++)
        employees[i].show();

    return 0;
}

