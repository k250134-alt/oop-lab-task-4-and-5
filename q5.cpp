/*5. Scenario:
A university wants to track students and departments.
Create:

• Department class (name, code)
• Student class (name, age, Department object)
Create array of 3 students and display all data.*/
#include<iostream>
using namespace std;
class Department
{
	private:
		string name;
		int code;
	public :
		Department(string n,int c) : name(n),code(c){
		}
		void display()
		{
			cout<<"Name of the department : "<<name<<endl;
			cout<<"Code of the department : "<<code<<endl;
		}
};
class Student 
{
	private:
		string name;
		int age;
		Department d;
	public:
		Student(string n, int a, Department dep) : name(n),age(a),d(dep) {
		}
		void show()
		{
			cout<<"Name of the student : "<<name<<endl;
			cout<<"Age of the student : "<<age<<endl;
			d.display();
		}
};
int main()
{
	Student * s[3];
	int i;
	for(i=0;i<3;i++)
	{
		 string sName, depName;
        int age, depCode;

        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "Student name: ";
        getline(cin, sName);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Department name: ";
        getline(cin, depName);

        cout << "Department code: ";
        cin >> depCode;
        cin.ignore();
        Department d1(depName,depCode);
        s[i]=new Student(sName,age,d1);
	}
	for(i=0;i<3;i++)
	{
		s[i]->show();
	}
	for(i=0;i<3;i++)
	{
		delete s[i];
	}
}
