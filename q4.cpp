/*4. Create two classes:
Engine
• horsepower
Car
• model
• Engine object
Print car details with engine power.*/
#include<iostream>
using namespace std;
class Engine
{
	private :
	float horse_power;
	public :
		Engine(float hp)
		{
			horse_power=hp;
		}
		void showHp()
		{
			cout<<"Horse power of the car :"<<horse_power<<endl;
		}
};
class Car
{
	private :
		string model;
		Engine e;
	public :
		Car(string m, Engine en) : model(m),e(en) {
		}
		void showData()
		{
			cout<<"The model of the car :"<<model<<endl;
			e.showHp();
		}
};
int main()
{
	Engine e1(200);
	Car c1("new",e1);
	c1.showData();
	
}
