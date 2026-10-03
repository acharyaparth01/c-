#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int a[5]={10,20,30,40,50};
    int *p=a;

    for(int i=0;i<5;i++)
        cout<<*(p+i)<<" ";

    getch();
}
//10 20 30 40 50
