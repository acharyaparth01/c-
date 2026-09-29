//conversion from class type to basic type

#include<iostream.h>
#include<conio.h>

class A
{
	float a,b;
	public:
		void get()
		{
			cout<<"enter two numbers:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a= "<<a;
			cout<<"\n b= "<<b;
		}
		operator float()
		{
			return(a+b);
		}

};

void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	float sum=a1; //float sum=a1.operator float();
	cout<<"\n sum= "<<sum;
	getch();
}
/* enter two numbers:1
2
a=1
b=2
sum=3 */
