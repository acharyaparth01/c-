#include<iostream.h>
#include<conio.h>

int* fun()
{
    static int x=10;
    return &x;
}

void main()
{
    clrscr();

    int *p=fun();

    cout<<"Value = "<<*p;

    getch();
}
//Value = 10
