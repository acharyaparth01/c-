//conversion from one class type to another class type

#include<iostream.h>
#include<conio.h>

class B; //forward declaration

class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter a and b:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a= "<<a<<"\t b= "<<b;
		}
		/*operator B()
		{
			b B1;
			b1.sum=a+b;
			return b1;
		}*/
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};

class B
{
	int sum;
	public:
		B(A a1)
		{
			sum=a1.geta()+a1.getb();
		}
		void put()
		{
			cout<<"\n sum= "<<sum;
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	B b1=a1;
	//class A->class B B b1=B(a1)
	a1.put();
	b1.put();
	getch();
}
/*
enter a and b:1
2
a=1	b=2
sum=3 */