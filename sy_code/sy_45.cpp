#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();

    int a=10;
    int *p=&a;
    int **q=&p;

    cout<<"Value = "<<**q;

    getch();
}
//Value = 10
