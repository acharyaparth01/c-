//object as function aregument

#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"\n enter two numbers:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a= "<<a<<"\n b= "<<b;
		}
		void swap1(A a1)//pass by value
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap2(A &a1)//pass by reference
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap3(A *a1)//pass y pointer
		{
			int c=a1->a;
			a1->a=a1->b;
			a1->b=c;
		}
		void swap4(const A&a1)//pass by constant reference
		{
			cout<<"\n a= "<<a1.a<<"\t b= "<<a1.b;
			/*int c=a1.a;
			a1.a=a1.b;
			a1.b=c;*/
		}
		void swap5(const A*a1)//pass by constant pointer
		{
			cout<<"\n a= "<<a1->a<<"\t b= "<<a1->b;
			/*int c=a1->a;
			a1->a=a1->b;
			a1->b=c*/
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();

	a1.swap1(a1);
	cout<<"\n after awap1 pass by value:";
	a1.put();

	a1.swap2(a1);
	cout<<"\n after awap2 pass by reference:";
	a1.put();

	a1.swap3(&a1);
	cout<<"\n after awap3 pass by pointer:";
	a1.put();

	a1.swap4(a1);
	cout<<"\n after awap3 pass by pointer:";
	a1.put();

	a1.swap5(&a1);
	cout<<"\n after awap5 pass by cont pointer:";
	a1.put();
	getch();
}
