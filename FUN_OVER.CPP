#include<conio.h>
#include<iostream.h>
int add(int x,int y);
int add(int x,int y,int z);
void main()
{
	int a,b,c,d;
	clrscr();
	cout<<"enter three numbers:";
	cin>>a>>b>>c;
	d=add(a,b);
	cout<<"\n sum of two argument:"<<d;
	d=add(a,b,c);
	cout<<"\n sum of three argument:"<<d;
	getch();
}
int add(int x,int y)
{
	return(x+y);
}
int add(int x,int y,int z)
{
	return(x+y+z);
}
/*enter three number:1
2
3
	sum of two argument:3
	sum of three argument:6
*/