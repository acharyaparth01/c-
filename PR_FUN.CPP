#include<conio.h>
#include<iostream.h>

class demo
{
	int a;
	float b;
	char c;
	void get();

	public:
		void put()
		{
			get();
			cout<<"\na="<<a;
			cout<<"\nb="<<b;
			cout<<"\nc="<<c;
		}
};
void demo::get()
{
	cout<<"enter an int,float,char:";
	cin>>a>>b>>c;
}
void main()
{
	demo d;
	clrscr();
	//d.get we dont this because it private
	d.put();
	getch();
}