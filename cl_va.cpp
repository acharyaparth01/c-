#include<iostream.h>
#include<conio.h>
int swap(int,int);
void main()
{
   int a=10,b=20;
   clrscr();
   swap(a,b);
   cout<<"a="<<a<<"\tb="<<b;
   getch();
}
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
