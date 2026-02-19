/*1. Create a class Car with:
• private speed
• function setSpeed(int)
• const function showSpeed()*/
#include<iostream>
using namespace std;
class Car
{
	private :
		int speed; 
	public :
		void setspeed(int s)
		{
			speed=s;
		}
		void showspeed() const
		{
			cout<<"The speed of the car is : "<<speed<<endl;
		}
};
int main()
{
	Car c1;
	c1.setspeed(400);
	c1.showspeed();
}
