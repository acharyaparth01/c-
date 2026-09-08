#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		A() //default constructor
		{
			cout<<"default constructor";
			a=0;
			b=0;
		}
		A(int x,int y) //parameterized constructor
		{
			cout<<"parameterized constructor";
			a=x;
			b=y;
		}
		A(A &a1) //copy constructor
		{
			cout<<"copy constructor";
			a=a1.a;
			b=a1.b;
		}
		void put()
		{
			cout<<"\n a= "<<a<<"\t b= "<<b;
		}
};

void main()
{
	int x,y;
	clrscr();
	cout<<"\n enter two numbers:";
	cin>>x>>y;
	A a1; //defa. cons.
	A a2(x,y); //para. cons.
	A a3=a2; //copy cons.
	a1=a2; //it just assign the value

	a1.put();
	a2.put();
	a3.put();

	getch();
}