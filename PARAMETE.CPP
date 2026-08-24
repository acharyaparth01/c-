//parameterrized constructor (constructor with argument)

#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		A(int x,int y) //parameterrized constructor
		{
			cout<<"\n parameterrized constructor";
			a=x;
			b=y;
		}
		void put()
		{
			cout<<"\na= "<<a<<"\tb= "<<b;
		}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\n enter two numbers:";
	cin>>x>>y;
	//A az;
	A a1(x,y);
	a1.put();
	getch();
}
/*
enter two numbers:10
20

parameterrized constructor
a=10	b=20
*/