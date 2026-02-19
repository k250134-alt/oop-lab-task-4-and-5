/*3. Create a class BankAccount with:
• static float interestRate
• static function changeRate(float)
• function showRate()
Change interest rate once and show for all objects.*/
#include<iostream>
using namespace std;
class BankAccount 
{
	private :
		static float interestRate;
	public :
		static void changeRate(float r )
		{
			interestRate=r;
		}
		void showRate()
		{
			cout<<"The interest rate :"<<interestRate<<"%"<<endl;
		}
		
};
float BankAccount::interestRate=20;
int main()
{
	BankAccount b1, b2;
	b1.showRate();
	cout<<"Changing interest rate : ";
	b2.changeRate(4.5);
	b2.showRate();
}
