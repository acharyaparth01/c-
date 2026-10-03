#include<iostream.h>
#include<conio.h>

class A
{
public:
    void showA()
    {
        cout<<"Base Class"<<endl;
    }
};

class B:public A
{
public:
    void showB()
    {
        cout<<"Derived Class";
    }
};

void main()
{
    clrscr();

    B obj;

    obj.showA();
    obj.showB();

    getch();
}
//Base Class
//Derived Class
