#include<iostream.h>
#include<conio.h>

class result
{
	int rn;
	char nm[20]; //array within class
	int m[3]; //array within class
	int total;
	public:
		void get();
		void put();
};

void result :: get()
{
	cout<<"enter roll no.,name and marks of 3 subjects:";
	cin>>rn>>nm;
	total=0;
	for(int i=0;i<3;i++)
	{
		cin>>m[i];
		total +=m[i];
	}
}
void result :: put()
{
	cout<<endl<<rn<<"\t"<<nm;
	for(int i=0;i<3;i++)
		cout<<"\t"<<m[i];
	cout<<"\t"<<total;
}
void main()
{
	result r[5];//array of object
	clrscr();
	for(int i=0;i<5;i++)
		r[i].get();
	cout<<"\n rno \t name \t m1 \t m2 \t m3 \t total";
	for(i=0;i<5;i++)
		r[i].put();
	getch();
}