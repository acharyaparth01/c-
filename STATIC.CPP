#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	static int b;
	public:
		void get()
		{
			cout<<"\n enter a:";
			cin>>a;
			b++;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
int A :: b;

void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get(); //10 1
	a1.put();
	a2.get(); //20 2
	a2.put();
	a3.put(); //30 3
	a3.get();
	a2.put();
	getch();
}