//multiple constructor(constructor oerloading)

#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	public:
	A() //default cons
	{
		cout<<"\n default constructor";
		a=0;
	}
	A(int x) //parameterrized constructor
	{
		cout<<"\n parameterrized constructor";
		a=x;
	}
	void put()
	{
		cout<<"\n a= "<<a;
	}
	friend A sum(A a1,A a2);
};

A sum(A a1,A a2)
{
	A a3;
	a3.a=a1.a+a2.a;
	return(a3);
}

void main()
{
	int x,y;
	clrscr();
	cout<<"\n enter two numbers:";
	cin>>x>>y;
	A a1(x);
	A a2=y; //A a2(y);
	A a3;

	a3=sum(a1,a2);

	a1.put();
	a2.put();
	a3.put();

	getch();
}
/*
enter two numbers=10
20

parameterrized constructor
parameterrized constructor
default constructor
default constructor
a=10
a=20
a=30
*/