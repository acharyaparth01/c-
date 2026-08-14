#include<iostream.h>
#include<conio.h>
int swap(int *x,int *y);
void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"a="<<a<<"\tb="<<b;
	swap(&a,&b);
	cout<<"\na="<<a<<"\tb="<<b;
	getch();
}
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
