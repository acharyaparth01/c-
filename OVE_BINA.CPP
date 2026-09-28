//overload binary oprator -&==using friend function

#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	public:
		void get()
		{
			cout<<"enter a no:";
			cin>>a;
		}
		void put()
		{
			cout<<"\n a= "<<a;
		}
		friend A operator-(A a1,A a2);
		friend int operator==(A a1,A a2);
};
A operator-(A a1,A a2)