#include<conio.h>
#include<iostream.h>

class demo
{
	int a;
	float b;
	char c;

	public:
		void get()
		{
			cout<<"enter an int,a float,char:";
			cin>>a>>b>>c;
		}
		void put();
};
void demo::put()
{
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
	cout<<"\nc="<<c;
};
void main()
{
	demo d1;
	clrscr();
	d1.get();
	d1.put();
	// cout<<"\n a="<<d1.a;
	getch();
}
/*Enter an int,float,char:12
3.4
a
a=12
b=3.4
c=a*/
