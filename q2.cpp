/*2. Create a class Book with:
• title
• price
Create array of 5 books and display them using loop.*/
#include<iostream>
using namespace std;
class Book
{
	private :
		string title;
		float price;
		public :
		void setData(string t, float p)
		{
			title=t;
			price=p;
		}
		void show()
		{
		   cout<<"Title : "<<title<<endl;
		   cout<<"Price : "<<price<<endl;
		}
};
int main()
{
	Book b[5];
	int i;
	for(i=0;i<5;i++)
	{
		string title;
		float price;
		cout<<"Enter the title of book : "<<i+1<<endl;
		cin>>title;
		cout<<"Enter the price : "<<endl;
		cin>>price;
		b[i].setData(title,price);
	}
	cout<<"Discription of all books "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Book : "<<i+1<<endl;
		b[i].show();
	}
}
